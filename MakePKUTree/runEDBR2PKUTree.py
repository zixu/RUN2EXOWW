import os
import random
import sys
import ctypes
import time

import ROOT

from optparse import OptionParser
parser = OptionParser()

parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
(options, args) = parser.parse_args()


ROOT.gSystem.Load("EDBR2PKUTree_C.so")
from ROOT import EDBR2PKUTree, TFile, TTree



if __name__ == '__main__': 
    input_dir="./inputEDBRTree/"

    infile=open("filelist.txt")

    totalsamples=infile.readlines()

    for sample in totalsamples:
            print "Loading ", sample
            if sample[0]!="#":

                sampleconfig=sample.split(';')
                samplename=sampleconfig[0]
                sampleXS=sampleconfig[1]
                sampleNum=sampleconfig[2]

                samplename=samplename.replace(' ', '').replace('\n','').replace('/n','') 
                sampleXS  =float(sampleXS.replace(' ', '').replace('\n','').replace('/n','') )
                sampleNum =int(sampleNum.replace(' ', '').replace('\n','').replace('/n','') )

                print samplename
                print sampleXS
                print sampleNum


                filein =TFile(input_dir+samplename);
                dir1 = filein.Get("treeDumper");
                treein = dir1.Get("EDBRCandidates")

                channel="mu"
                analyzer_mu=EDBR2PKUTree(treein,channel+"_out_"+samplename);
                analyzer_mu.Loop(channel, sampleXS, sampleNum);
                analyzer_mu.endJob();

                channel="el"
                analyzer_el=EDBR2PKUTree(treein,channel+"_out_"+samplename);
                analyzer_el.Loop(channel, sampleXS, sampleNum);
                analyzer_el.endJob();
