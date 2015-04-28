//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jan  6 21:13:06 2015 by ROOT version 5.32/00
// from TTree EDBRCandidates/EDBR Candidates
// found on file: treeEDBR_MWp_2000_bb_xww.root
//////////////////////////////////////////////////////////

#ifndef EDBR2PKUTree_h
#define EDBR2PKUTree_h

#include "TROOT.h"
#include "TChain.h"
#include "TFile.h"
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TLorentzVector.h"

#include <iostream>
#include <fstream>
using namespace std;
// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class EDBR2PKUTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types

   Int_t           ls;
   Int_t           run;
   Int_t           nLooseEle;
   Int_t           nLooseMu;
   Int_t           njets;
   Int_t           nbtag;
   Double_t        jet2_pt;
   Double_t        jet2_btag;
   Double_t        jet3_pt;
   Double_t        jet3_btag;

   Float_t pfMET;
   Float_t pfMETPhi;
   Float_t l_pt;
   Float_t l_eta;
   Float_t l_phi;
   Float_t jet_pt;
   Float_t jet_eta;
   Float_t jet_phi;
   Float_t jet_mass_pruned;
   Float_t jet_mass_softdrop;
   Float_t jet_tau2tau1;
   Float_t W_pt;
   Float_t W_eta;
   Float_t W_phi;
   Float_t m_lvj;
   Float_t fjet2_pt;
   Float_t fjet2_btag;
   Float_t fjet3_pt;
   Float_t fjet3_btag; 
   //JEC
//   Double_t corr_AK8;
   Double_t jetAK8_pt;
   Double_t jetAK8_mass;
   Double_t jetAK8_jec;
//   Double_t jetAK8_e;
//   Double_t corr;
   Double_t jetAK4_pt[6];
   Double_t jetAK4_mass[6];
   Double_t jetAK4_e[6];
   Double_t jetAK4_jec[6];
   Double_t METraw_et;
   Double_t METraw_phi;
   Double_t METraw_sumEt;
   Double_t MET_et;
   Double_t MET_phi;
   Double_t MET_sumEt;
   Double_t MET_corrPx;
   Double_t MET_corrPy;
   Int_t CategoryID;

   Double_t        weight;

   Int_t           event;
   Int_t           nVtx;
   Int_t           numCands;
   Double_t        ptVlep;
   Double_t        ptVhad;
   Double_t        yVlep;
   Double_t        yVhad;
   Double_t        phiVlep;
   Double_t        phiVhad;
   Double_t        massVlep;
   Double_t        mtVlep;
   Double_t        massVhad;
   Double_t        massVhad_gen;
   Double_t        tau1;
   Double_t        tau2;
   Double_t        tau3;
   Double_t        tau21;
   Double_t        sdrop;
   Int_t           lep;
   Int_t           region;
   Int_t           channel;
   Double_t        candMass;
   Double_t        gen_gra_m;
   Double_t        gen_gra_pt;
   Double_t        gen_ele_pt;
   Double_t        gen_ele_eta;
   Double_t        gen_ele_phi;
   Double_t        gen_ele_e;
   Double_t        gen_mu_pt;
   Double_t        gen_mu_eta;
   Double_t        gen_mu_phi;
   Double_t        gen_mu_e;
   Double_t        genmatch_ele_pt;
   Double_t        genmatch_ele_eta;
   Double_t        genmatch_ele_phi;
   Double_t        genmatch_ele_e;
   Double_t        genmatch_ele_dr;
   Double_t        genmatch_mu_pt;
   Double_t        genmatch_mu_eta;
   Double_t        genmatch_mu_phi;
   Double_t        genmatch_mu_e;
   Double_t        genmatch_mu_dr;
   Double_t        ak4jet_pt[6];
   Double_t        ak4jet_eta[6];
   Double_t        ak4jet_phi[6];
   Double_t        ak4jet_e[6];
   Double_t        ak4jet_dr[6];
   Double_t        ak4jet_csv[6];
   Double_t        ak4jet_icsv[6];
   Double_t        eeDeltaR;
   Double_t        ptel1;
   Double_t        ptel2;
   Double_t        etaSC1;
   Double_t        etaSC2;
   Double_t        dEtaIn1;
   Double_t        dEtaIn2;
   Double_t        dPhiIn1;
   Double_t        dPhiIn2;
   Double_t        hOverE1;
   Double_t        hOverE2;
   Double_t        full5x5_sigma1;
   Double_t        full5x5_sigma2;
   Double_t        ooEmooP1;
   Double_t        ooEmooP2;
   Double_t        d01;
   Double_t        d02;
   Double_t        dz1;
   Double_t        dz2;
   Double_t        relIso1;
   Double_t        relIso2;
   Int_t           missingHits1;
   Int_t           missingHits2;
   Int_t           passConVeto1;
   Int_t           passConVeto2;
   Int_t           el1passID;
   Int_t           el2passID;
   Int_t           el1tightID;
   Int_t           el1mediumID;
   Int_t           el1looseID;
   Int_t           mu1tightID;
   Double_t        ptlep1;
   Double_t        ptlep2;
   Double_t        ptjet1;
   Double_t        etalep1;
   Double_t        etalep2;
   Double_t        etajet1;
   Double_t        philep1;
   Double_t        philep2;
   Double_t        phijet1;
   Double_t        massjet1;
   Double_t        met;
   Double_t        metPhi;
   Double_t        triggerWeight;
   Double_t        lumiWeight;
   Double_t        pileupWeight;
   Double_t        deltaRleplep;
   Double_t        delPhilepmet;
   Double_t        deltaRlepjet;
   Double_t        delPhijetmet;
   Double_t        delPhijetlep;
   bool IDLoose;
   bool isHighPt;
   bool isHEEP;
   Double_t ptmu1,etamu1;
   Double_t trackIso;
   // List of branches

   TBranch        *b_run;
   TBranch        *b_ls;
   TBranch        *b_nLooseEle;
   TBranch        *b_nLooseMu;
   TBranch        *b_njets;
   TBranch        *b_nbtag;
   TBranch        *b_jet2_pt;
   TBranch        *b_jet2_btag;
   TBranch        *b_jet3_pt;
   TBranch        *b_jet3_btag;


   TBranch        *b_event;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_numCands;   //!
   TBranch        *b_ptVlep;   //!
   TBranch        *b_ptVhad;   //!
   TBranch        *b_yVlep;   //!
   TBranch        *b_yVhad;   //!
   TBranch        *b_phiVlep;   //!
   TBranch        *b_phiVhad;   //!
   TBranch        *b_massVlep;   //!
   TBranch        *b_mtVlep;   //!
   TBranch        *b_massVhad;   //!
   TBranch        *b_massVhad_gen;   //!
   TBranch        *b_tau1;   //!
   TBranch        *b_tau2;   //!
   TBranch        *b_tau3;   //!
   TBranch        *b_tau21;   //!
   TBranch        *b_sdrop;
   TBranch        *b_lep;   //!
   TBranch        *b_region;   //!
   TBranch        *b_channel;   //!
   TBranch        *b_candMass;   //!
   TBranch        *b_gen_gra_m;   //!
   TBranch        *b_gen_gra_pt;   //!
   TBranch        *b_gen_ele_pt;   //!
   TBranch        *b_gen_ele_eta;   //!
   TBranch        *b_gen_ele_phi;   //!
   TBranch        *b_gen_ele_e;   //!
   TBranch        *b_gen_mu_pt;   //!
   TBranch        *b_gen_mu_eta;   //!
   TBranch        *b_gen_mu_phi;   //!
   TBranch        *b_gen_mu_e;   //!
   TBranch        *b_genmatch_ele_pt;   //!
   TBranch        *b_genmatch_ele_eta;   //!
   TBranch        *b_genmatch_ele_phi;   //!
   TBranch        *b_genmatch_ele_e;   //!
   TBranch        *b_genmatch_ele_dr;   //!
   TBranch        *b_genmatch_mu_pt;   //!
   TBranch        *b_genmatch_mu_eta;   //!
   TBranch        *b_genmatch_mu_phi;   //!
   TBranch        *b_genmatch_mu_e;   //!
   TBranch        *b_genmatch_mu_dr;   //!
   TBranch        *b_ak4jet_pt;   //!
   TBranch        *b_ak4jet_eta;   //!
   TBranch        *b_ak4jet_phi;   //!
   TBranch        *b_ak4jet_e;   //!
   TBranch        *b_ak4jet_dr;   //!
   TBranch        *b_ak4jet_csv;   //!
   TBranch        *b_ak4jet_icsv;   //!
   TBranch        *b_eeDeltaR;   //!
   TBranch        *b_ptel1;   //!
   TBranch        *b_ptel2;   //!
   TBranch        *b_etaSC1;   //!
   TBranch        *b_etaSC2;   //!
   TBranch        *b_dEtaIn1;   //!
   TBranch        *b_dEtaIn2;   //!
   TBranch        *b_dPhiIn1;   //!
   TBranch        *b_dPhiIn2;   //!
   TBranch        *b_hOverE1;   //!
   TBranch        *b_hOverE2;   //!
   TBranch        *b_full5x5_sigma1;   //!
   TBranch        *b_full5x5_sigma2;   //!
   TBranch        *b_ooEmooP1;   //!
   TBranch        *b_ooEmooP2;   //!
   TBranch        *b_d01;   //!
   TBranch        *b_d02;   //!
   TBranch        *b_dz1;   //!
   TBranch        *b_dz2;   //!
   TBranch        *b_relIso1;   //!
   TBranch        *b_relIso2;   //!
   TBranch        *b_missingHits1;   //!
   TBranch        *b_missingHits2;   //!
   TBranch        *b_passConVeto1;   //!
   TBranch        *b_passConVeto2;   //!
   TBranch        *b_el1passID;   //!
   TBranch        *b_el2passID;   //!
   TBranch        *b_el1tightID;   //!
   TBranch        *b_el1mediumID;   //!
   TBranch        *b_el1looseID;   //!
   TBranch        *b_mu1tightID;   //!
   TBranch        *b_ptlep1;   //!
   TBranch        *b_ptlep2;   //!
   TBranch        *b_ptjet1;   //!
   TBranch        *b_etalep1;   //!
   TBranch        *b_etalep2;   //!
   TBranch        *b_etajet1;   //!
   TBranch        *b_philep1;   //!
   TBranch        *b_philep2;   //!
   TBranch        *b_phijet1;   //!
   TBranch        *b_massjet1;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metPhi;   //!
   TBranch        *b_triggerWeight;   //!
   TBranch        *b_lumiWeight;   //!
   TBranch        *b_pileupWeight;   //!
   TBranch        *b_deltaRleplep;   //!
   TBranch        *b_delPhilepmet;   //!
   TBranch        *b_deltaRlepjet;   //!
   TBranch        *b_delPhijetmet;   //!
   TBranch        *b_delPhijetlep;   //!
   TBranch	  *b_IDLoose;
   TBranch	  *b_isHighPt;
   TBranch	  *b_isHEEP;
   TBranch        *b_ptmu1;
   TBranch        *b_etamu1;
   TBranch        *b_trackIso;
//JEC
//   TBranch        *b_corr_AK8;
   TBranch        *b_jetAK8_pt;
   TBranch        *b_jetAK8_mass;
   TBranch        *b_jetAK8_jec;
//   TBranch        *b_jetAK8_e;
//   TBranch        *b_corr;
   TBranch        *b_jetAK4_pt; 
   TBranch        *b_jetAK4_mass; 
   TBranch        *b_jetAK4_e; 
   TBranch        *b_jetAK4_jec;
   TBranch        *b_METraw_et; 
   TBranch        *b_METraw_phi;
   TBranch        *b_METraw_sumEt;
   TBranch        *b_MET_et; 
   TBranch        *b_MET_phi; 
   TBranch        *b_MET_sumEt; 
   TBranch        *b_MET_corrPx; 
   TBranch        *b_MET_corrPy;

   TString m_dataset;
   EDBR2PKUTree(TTree *tree=0, TString dataset="");

   virtual ~EDBR2PKUTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString channel, Double_t XS, Double_t totaleventnumber);// channel= "mu" or "el"
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     endJob() ;

   private:
   TTree *ExTree;
   TFile *fout; 
   ofstream *file_cutflow;
	

};

#endif

#ifdef EDBR2PKUTree_C
EDBR2PKUTree::EDBR2PKUTree(TTree *tree, TString dataset) : fChain(0) 
{
 
   m_dataset=dataset;
   Init(tree);
}

EDBR2PKUTree::~EDBR2PKUTree()
{
   if (!fChain) return;
   //delete fChain->GetCurrentFile();
}

Int_t EDBR2PKUTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t EDBR2PKUTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void EDBR2PKUTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fout = new TFile(m_dataset, "RECREATE");
   ExTree = new TTree("PKUTree","PKUTree");
   file_cutflow =new ofstream(m_dataset+"_eventnum.txt");

   ExTree->Branch("CategoryID", &CategoryID, "CategoryID/I");
   ExTree->Branch("massVhad", &massVhad, "massVhad/D");
   //ExTree->Branch("candMass", &candMass, "candMass/D");
   ExTree->Branch("tau21", &tau21, "tau21/D");
   ExTree->Branch("triggerWeight", &triggerWeight, "triggerWeight/D");
   ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
   ExTree->Branch("pileupWeight", &pileupWeight, "pileupWeight/D");


   ExTree->Branch("run",&run,"run/I");
   ExTree->Branch("event",&event,"event/I");
   ExTree->Branch("lumi",&ls,"lumi/I");
   ExTree->Branch("nPV",&nVtx,"nPV/I");
   ExTree->Branch("pfMET",&pfMET,"pfMET/F");
   ExTree->Branch("pfMETPhi",&pfMETPhi,"pfMETPhi/F");
   ExTree->Branch("weight", &weight, "weight/D");

   ExTree->Branch("nLooseEle",&nLooseEle,"nLooseEle/I");
   ExTree->Branch("nLooseMu",&nLooseMu,"nLooseMu/I");
   ExTree->Branch("l_pt",&l_pt,"l_pt/F");
   ExTree->Branch("l_eta",&l_eta,"l_eta/F");
   ExTree->Branch("l_phi",&l_phi,"l_phi/F");

   ExTree->Branch("jet_pt",&jet_pt,"jet_pt/F");
   ExTree->Branch("jet_eta",&jet_eta,"jet_eta/F");
   ExTree->Branch("jet_phi",&jet_phi,"jet_phi/F");
   ExTree->Branch("jet_mass_pruned",&jet_mass_pruned,"jet_mass_pruned/F");
   ExTree->Branch("jet_mass_softdrop",&jet_mass_softdrop,"jet_mass_softdrop/F");
   ExTree->Branch("jet_tau2tau1",&jet_tau2tau1,"jet_tau2tau1/F");

   ExTree->Branch("W_pt",&W_pt,"W_pt/F");
   ExTree->Branch("W_eta",&W_eta,"W_eta/F");
   ExTree->Branch("W_phi",&W_phi,"W_phi/F");
   ExTree->Branch("m_lvj",&m_lvj,"m_lvj/F");

   ExTree->Branch("njets",&njets,"njets/I");
   ExTree->Branch("nbtag",&nbtag,"nbtag/I");
   ExTree->Branch("jet2_pt",&fjet2_pt,"jet2_pt/F");
   ExTree->Branch("jet2_btag",&fjet2_btag,"jet2_btag/F");
   ExTree->Branch("jet3_pt",&fjet3_pt,"jet3_pt/F");
   ExTree->Branch("jet3_btag",&fjet3_btag,"jet3_btag/F");
//JEC

//   ExTree->Branch("corr_AK8",&corr_AK8,"corr_AK8/D");
   ExTree->Branch("jetAK8_pt",&jetAK8_pt,"jetAK8_pt/D");
   ExTree->Branch("jetAK8_mass",&jetAK8_mass,"jetAK8_mass/D");
   ExTree->Branch("jetAK8_jec",&jetAK8_jec,"jetAK8_jec/D");
//   ExTree->Branch("jetAK8_e",&jetAK8_e,"jetAK8_e/D");
//   ExTree->Branch("corr",&corr,"corr/D");
   ExTree->Branch("jetAK4_pt",&jetAK4_pt,"jetAK4_pt/D");
   ExTree->Branch("jetAK4_mass",&jetAK4_mass,"jetAK4_mass/D");
   ExTree->Branch("jetAK4_e",&jetAK4_e,"jetAK4_e/D");
   ExTree->Branch("jetAK4_jec",&jetAK4_jec,"jetAK4_jec/D");
   ExTree->Branch("METraw_et",&METraw_et,"METraw_et/D");
   ExTree->Branch("METraw_phi",&METraw_phi,"METraw_phi/D");
   ExTree->Branch("METraw_sumEt",&METraw_sumEt,"METraw_sumEt/D");
   ExTree->Branch("MET_et",&MET_et,"MET_et/D");
   ExTree->Branch("MET_phi",&MET_phi,"MET_phi/D");
   ExTree->Branch("MET_sumEt",&MET_sumEt,"MET_sumEt/D");
   ExTree->Branch("MET_corrPx",&MET_corrPx,"MET_corrPx/D");
   ExTree->Branch("MET_corrPy",&MET_corrPy,"MET_corrPy/D");

 

   fChain->SetBranchAddress("run",&run,&b_run);
   fChain->SetBranchAddress("ls",&ls,&b_ls);
   fChain->SetBranchAddress("nLooseEle",&nLooseEle,&b_nLooseEle);
   fChain->SetBranchAddress("nLooseMu",&nLooseMu,&b_nLooseMu);
   fChain->SetBranchAddress("njets",&njets,&b_njets);
   fChain->SetBranchAddress("nbtag",&nbtag,&b_nbtag);
   fChain->SetBranchAddress("jet2_pt",&jet2_pt,&b_jet2_pt);
   fChain->SetBranchAddress("jet2_btag",&jet2_btag,&b_jet2_btag);
   fChain->SetBranchAddress("jet3_pt",&jet3_pt,&b_jet3_pt);
   fChain->SetBranchAddress("jet3_btag",&jet3_btag,&b_jet3_btag);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
   fChain->SetBranchAddress("numCands", &numCands, &b_numCands);
   fChain->SetBranchAddress("ptVlep", &ptVlep, &b_ptVlep);
   fChain->SetBranchAddress("ptVhad", &ptVhad, &b_ptVhad);
   fChain->SetBranchAddress("yVlep", &yVlep, &b_yVlep);
   fChain->SetBranchAddress("yVhad", &yVhad, &b_yVhad);
   fChain->SetBranchAddress("phiVlep", &phiVlep, &b_phiVlep);
   fChain->SetBranchAddress("phiVhad", &phiVhad, &b_phiVhad);
   fChain->SetBranchAddress("massVlep", &massVlep, &b_massVlep);
   fChain->SetBranchAddress("mtVlep", &mtVlep, &b_mtVlep);
   fChain->SetBranchAddress("massVhad", &massVhad, &b_massVhad);
   fChain->SetBranchAddress("massVhad_gen", &massVhad_gen, &b_massVhad_gen);
   fChain->SetBranchAddress("tau1", &tau1, &b_tau1);
   fChain->SetBranchAddress("tau2", &tau2, &b_tau2);
   fChain->SetBranchAddress("tau3", &tau3, &b_tau3);
   fChain->SetBranchAddress("tau21", &tau21, &b_tau21);
   fChain->SetBranchAddress("sdrop", &sdrop, &b_sdrop);
   fChain->SetBranchAddress("lep", &lep, &b_lep);
   fChain->SetBranchAddress("region", &region, &b_region);
   fChain->SetBranchAddress("channel", &channel, &b_channel);
   fChain->SetBranchAddress("candMass", &candMass, &b_candMass);
   fChain->SetBranchAddress("gen_gra_m", &gen_gra_m, &b_gen_gra_m);
   fChain->SetBranchAddress("gen_gra_pt", &gen_gra_pt, &b_gen_gra_pt);
   fChain->SetBranchAddress("gen_ele_pt", &gen_ele_pt, &b_gen_ele_pt);
   fChain->SetBranchAddress("gen_ele_eta", &gen_ele_eta, &b_gen_ele_eta);
   fChain->SetBranchAddress("gen_ele_phi", &gen_ele_phi, &b_gen_ele_phi);
   fChain->SetBranchAddress("gen_ele_e", &gen_ele_e, &b_gen_ele_e);
   fChain->SetBranchAddress("gen_mu_pt", &gen_mu_pt, &b_gen_mu_pt);
   fChain->SetBranchAddress("gen_mu_eta", &gen_mu_eta, &b_gen_mu_eta);
   fChain->SetBranchAddress("gen_mu_phi", &gen_mu_phi, &b_gen_mu_phi);
   fChain->SetBranchAddress("gen_mu_e", &gen_mu_e, &b_gen_mu_e);
   fChain->SetBranchAddress("genmatch_ele_pt", &genmatch_ele_pt, &b_genmatch_ele_pt);
   fChain->SetBranchAddress("genmatch_ele_eta", &genmatch_ele_eta, &b_genmatch_ele_eta);
   fChain->SetBranchAddress("genmatch_ele_phi", &genmatch_ele_phi, &b_genmatch_ele_phi);
   fChain->SetBranchAddress("genmatch_ele_e", &genmatch_ele_e, &b_genmatch_ele_e);
   fChain->SetBranchAddress("genmatch_ele_dr", &genmatch_ele_dr, &b_genmatch_ele_dr);
   fChain->SetBranchAddress("genmatch_mu_pt", &genmatch_mu_pt, &b_genmatch_mu_pt);
   fChain->SetBranchAddress("genmatch_mu_eta", &genmatch_mu_eta, &b_genmatch_mu_eta);
   fChain->SetBranchAddress("genmatch_mu_phi", &genmatch_mu_phi, &b_genmatch_mu_phi);
   fChain->SetBranchAddress("genmatch_mu_e", &genmatch_mu_e, &b_genmatch_mu_e);
   fChain->SetBranchAddress("genmatch_mu_dr", &genmatch_mu_dr, &b_genmatch_mu_dr);
   fChain->SetBranchAddress("ak4jet_pt", ak4jet_pt, &b_ak4jet_pt);
   fChain->SetBranchAddress("ak4jet_eta", ak4jet_eta, &b_ak4jet_eta);
   fChain->SetBranchAddress("ak4jet_phi", ak4jet_phi, &b_ak4jet_phi);
   fChain->SetBranchAddress("ak4jet_e", ak4jet_e, &b_ak4jet_e);
   fChain->SetBranchAddress("ak4jet_dr", ak4jet_dr, &b_ak4jet_dr);
   fChain->SetBranchAddress("ak4jet_csv", ak4jet_csv, &b_ak4jet_csv);
   fChain->SetBranchAddress("ak4jet_icsv", ak4jet_icsv, &b_ak4jet_icsv);
   fChain->SetBranchAddress("eeDeltaR", &eeDeltaR, &b_eeDeltaR);
   fChain->SetBranchAddress("ptel1", &ptel1, &b_ptel1);
   fChain->SetBranchAddress("ptel2", &ptel2, &b_ptel2);
   fChain->SetBranchAddress("etaSC1", &etaSC1, &b_etaSC1);
   fChain->SetBranchAddress("etaSC2", &etaSC2, &b_etaSC2);
   fChain->SetBranchAddress("dEtaIn1", &dEtaIn1, &b_dEtaIn1);
   fChain->SetBranchAddress("dEtaIn2", &dEtaIn2, &b_dEtaIn2);
   fChain->SetBranchAddress("dPhiIn1", &dPhiIn1, &b_dPhiIn1);
   fChain->SetBranchAddress("dPhiIn2", &dPhiIn2, &b_dPhiIn2);
   fChain->SetBranchAddress("hOverE1", &hOverE1, &b_hOverE1);
   fChain->SetBranchAddress("hOverE2", &hOverE2, &b_hOverE2);
   fChain->SetBranchAddress("full5x5_sigma1", &full5x5_sigma1, &b_full5x5_sigma1);
   fChain->SetBranchAddress("full5x5_sigma2", &full5x5_sigma2, &b_full5x5_sigma2);
   fChain->SetBranchAddress("ooEmooP1", &ooEmooP1, &b_ooEmooP1);
   fChain->SetBranchAddress("ooEmooP2", &ooEmooP2, &b_ooEmooP2);
   fChain->SetBranchAddress("d01", &d01, &b_d01);
   fChain->SetBranchAddress("d02", &d02, &b_d02);
   fChain->SetBranchAddress("dz1", &dz1, &b_dz1);
   fChain->SetBranchAddress("dz2", &dz2, &b_dz2);
   fChain->SetBranchAddress("relIso1", &relIso1, &b_relIso1);
   fChain->SetBranchAddress("relIso2", &relIso2, &b_relIso2);
   fChain->SetBranchAddress("missingHits1", &missingHits1, &b_missingHits1);
   fChain->SetBranchAddress("missingHits2", &missingHits2, &b_missingHits2);
   fChain->SetBranchAddress("passConVeto1", &passConVeto1, &b_passConVeto1);
   fChain->SetBranchAddress("passConVeto2", &passConVeto2, &b_passConVeto2);
   fChain->SetBranchAddress("el1passID", &el1passID, &b_el1passID);
   fChain->SetBranchAddress("el2passID", &el2passID, &b_el2passID);
   fChain->SetBranchAddress("el1tightID", &el1tightID, &b_el1tightID);
   fChain->SetBranchAddress("el1mediumID", &el1mediumID, &b_el1mediumID);
   fChain->SetBranchAddress("el1looseID", &el1looseID, &b_el1looseID);
   fChain->SetBranchAddress("mu1tightID", &mu1tightID, &b_mu1tightID);
   fChain->SetBranchAddress("ptlep1", &ptlep1, &b_ptlep1);
   fChain->SetBranchAddress("ptlep2", &ptlep2, &b_ptlep2);
   fChain->SetBranchAddress("ptjet1", &ptjet1, &b_ptjet1);
   fChain->SetBranchAddress("etalep1", &etalep1, &b_etalep1);
   fChain->SetBranchAddress("etalep2", &etalep2, &b_etalep2);
   fChain->SetBranchAddress("etajet1", &etajet1, &b_etajet1);
   fChain->SetBranchAddress("philep1", &philep1, &b_philep1);
   fChain->SetBranchAddress("philep2", &philep2, &b_philep2);
   fChain->SetBranchAddress("phijet1", &phijet1, &b_phijet1);
   fChain->SetBranchAddress("massjet1", &massjet1, &b_massjet1);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metPhi", &metPhi, &b_metPhi);
   fChain->SetBranchAddress("triggerWeight", &triggerWeight, &b_triggerWeight);
   fChain->SetBranchAddress("lumiWeight", &lumiWeight, &b_lumiWeight);
   fChain->SetBranchAddress("pileupWeight", &pileupWeight, &b_pileupWeight);
   fChain->SetBranchAddress("deltaRleplep", &deltaRleplep, &b_deltaRleplep);
   fChain->SetBranchAddress("delPhilepmet", &delPhilepmet, &b_delPhilepmet);
   fChain->SetBranchAddress("deltaRlepjet", &deltaRlepjet, &b_deltaRlepjet);
   fChain->SetBranchAddress("delPhijetmet", &delPhijetmet, &b_delPhijetmet);
   fChain->SetBranchAddress("delPhijetlep", &delPhijetlep, &b_delPhijetlep);
   fChain->SetBranchAddress("IDLoose", &IDLoose, &b_IDLoose);
   fChain->SetBranchAddress("isHighPt", &isHighPt, &b_isHighPt);
   fChain->SetBranchAddress("isHEEP",&isHEEP,&b_isHEEP);
   fChain->SetBranchAddress("ptmu1",&ptmu1,&b_ptmu1);
   fChain->SetBranchAddress("etamu1",&etamu1,&b_etamu1);
   fChain->SetBranchAddress("trackIso",&trackIso,&b_trackIso);
//JEC
//   fChain->SetBranchAddress("corr_AK8",&corr_AK8,&b_corr_AK8);
   fChain->SetBranchAddress("jetAK8_pt",&jetAK8_pt,&b_jetAK8_pt);
   fChain->SetBranchAddress("jetAK8_mass",&jetAK8_mass,&b_jetAK8_mass);
   fChain->SetBranchAddress("jetAK8_jec",&jetAK8_jec,&b_jetAK8_jec);
//   fChain->SetBranchAddress("jetAK8_e",&jetAK8_e,&b_jetAK8_e);
//   fChain->SetBranchAddress("corr",&corr,&b_corr);
   fChain->SetBranchAddress("jetAK4_pt",&jetAK4_pt,&b_jetAK4_pt);
   fChain->SetBranchAddress("jetAK4_mass",&jetAK4_mass,&b_jetAK4_mass);
   fChain->SetBranchAddress("jetAK4_e",&jetAK4_e,&b_jetAK4_e);
   fChain->SetBranchAddress("jetAK4_jec",&jetAK4_jec,&b_jetAK4_jec);
   fChain->SetBranchAddress("METraw_et",&METraw_et,&b_METraw_et);
   fChain->SetBranchAddress("METraw_phi",&METraw_phi,&b_METraw_phi);
   fChain->SetBranchAddress("METraw_sumEt",&METraw_sumEt,&b_METraw_sumEt);
   fChain->SetBranchAddress("MET_et",&MET_et,&b_MET_et);
   fChain->SetBranchAddress("MET_phi",&MET_phi,&b_MET_phi);
   fChain->SetBranchAddress("MET_sumEt",&MET_sumEt,&b_MET_sumEt);
   fChain->SetBranchAddress("MET_corrPx",&MET_corrPx,&b_MET_corrPx);
   fChain->SetBranchAddress("MET_corrPy",&MET_corrPy,&b_MET_corrPy);

   
   
   Notify();
}

Bool_t EDBR2PKUTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void EDBR2PKUTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

void EDBR2PKUTree::endJob() {
   fout->cd();
   ExTree->Write();
   fout->Write();
   fout->Close();
}

Int_t EDBR2PKUTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef EDBR2PKUTree_C
