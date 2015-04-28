hadd -f mu_PKUTree_SingleTop_xww.root mu_out_TToLeptons_s-channel-CSA14_Tune4C_13TeV-aMCatNLO-tauola.root mu_out_TBarToLeptons_s-channel-CSA14_Tune4C_13TeV-aMCatNLO-tauola.root mu_out_TBarToLeptons_t-channel_Tune4C_CSA14_13TeV-aMCatNLO-tauola.root mu_out_TToLeptons_t-channel-CSA14_Tune4C_13TeV-aMCatNLO-tauola.root mu_out_T_tW-channel-DR_Tune4C_13TeV-CSA14-powheg-tauola.root mu_out_Tbar_tW-channel-DR_Tune4C_13TeV-CSA14-powheg-tauola.root

ln -s mu_out_TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola.root mu_PKUTree_TTBARpowheg_xww.root
ln -s mu_out_LOWW-lvjj-PT180.root  mu_PKUTree_VV_xww.root

hadd -f  mu_PKUTree_WJetsPt180_xww.root mu_out_WJetsToLNu_HT-600toInf_Tune4C_13TeV-madgraph-tauola.root mu_out_WJetsToLNu_HT-400to600_Tune4C_13TeV-madgraph-tauola.root mu_out_WJetsToLNu_HT-200to400_Tune4C_13TeV-madgraph-tauola.root mu_out_WJetsToLNu_HT-100to200_Tune4C_13TeV-madgraph-tauola.root

hadd -f mu_PKUTree_allBkg_xww.root  mu_PKUTree_SingleTop_xww.root mu_PKUTree_TTBARpowheg_xww.root mu_PKUTree_VV_xww.root mu_PKUTree_WJetsPt180_xww.root

ln -s mu_out_treeEDBR_RSGravitonToWW_2000_bb.root  mu_PKUTree_RSGravitonToWW_2000_xww.root


hadd -f el_PKUTree_SingleTop_xww.root el_out_TToLeptons_s-channel-CSA14_Tune4C_13TeV-aMCatNLO-tauola.root el_out_TBarToLeptons_s-channel-CSA14_Tune4C_13TeV-aMCatNLO-tauola.root el_out_TBarToLeptons_t-channel_Tune4C_CSA14_13TeV-aMCatNLO-tauola.root el_out_TToLeptons_t-channel-CSA14_Tune4C_13TeV-aMCatNLO-tauola.root el_out_T_tW-channel-DR_Tune4C_13TeV-CSA14-powheg-tauola.root el_out_Tbar_tW-channel-DR_Tune4C_13TeV-CSA14-powheg-tauola.root

ln -s el_out_TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola.root el_PKUTree_TTBARpowheg_xww.root
ln -s el_out_LOWW-lvjj-PT180.root  el_PKUTree_VV_xww.root

hadd -f  el_PKUTree_WJetsPt180_xww.root el_out_WJetsToLNu_HT-600toInf_Tune4C_13TeV-madgraph-tauola.root el_out_WJetsToLNu_HT-400to600_Tune4C_13TeV-madgraph-tauola.root el_out_WJetsToLNu_HT-200to400_Tune4C_13TeV-madgraph-tauola.root el_out_WJetsToLNu_HT-100to200_Tune4C_13TeV-madgraph-tauola.root

hadd -f el_PKUTree_allBkg_xww.root  el_PKUTree_SingleTop_xww.root el_PKUTree_TTBARpowheg_xww.root el_PKUTree_VV_xww.root el_PKUTree_WJetsPt180_xww.root

ln -s el_out_treeEDBR_RSGravitonToWW_2000_bb.root  el_PKUTree_RSGravitonToWW_2000_xww.root

root MakePseudoData.C\(\"mu\"\) -q
root MakePseudoData.C\(\"el\"\) -q
