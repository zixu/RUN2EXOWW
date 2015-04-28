#define EDBR2PKUTree_C
#include "EDBR2PKUTree.h"

void EDBR2PKUTree::Loop(TString channel, Double_t XS, Double_t totaleventnumber)
{

	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();

	Double_t n_deltaRlepjet = 0; Double_t n_delPhijetlep = 0; Double_t ntau = 0;
	Double_t number_qq = 0; Double_t nmassVhad = 0; Double_t nptVlep = 0;
	Double_t nID_e = 0;Double_t npt_e = 0;
	Double_t nmet_e = 0; Double_t nnum_bJet_e = 0; Double_t n_delPhijetmet = 0; 

	Double_t nID_mu = 0;Double_t npt_mu = 0;
	Double_t nmet_mu = 0; Double_t nnum_bJet_mu = 0; Double_t nbtb_mu = 0; 

	Double_t nptVhad = 0;

	//some constants inside this analysis
	Double_t pi_2=1.57079632679;
	Float_t Identical_lumiWeight = XS/totaleventnumber;//All the events inside a sample are same lumiweight


	Long64_t nbytes = 0, nb = 0;
	//for (Long64_t jentry=0; jentry<1000;jentry++)
	for (Long64_t jentry=0; jentry<nentries;jentry++) 
	{
		Long64_t ientry = LoadTree(jentry);
		if (ientry < 0) break;
		nb = fChain->GetEntry(jentry);   nbytes += nb;
		// if (Cut(ientry) < 0) continue;
		pfMET = Float_t(met);
		pfMETPhi = Float_t(metPhi);
		//pfMET = Float_t(MET_et);
		//pfMETPhi = Float_t(MET_phi);
		l_pt = Float_t(ptlep1);
		l_eta = Float_t(etalep1);
		l_phi = Float_t(philep1);
		jet_pt = Float_t(ptVhad);
		jet_eta = Float_t(yVhad);
		jet_phi = Float_t(phiVhad);
		jet_mass_pruned = Float_t(massVhad);
		jet_mass_softdrop = Float_t(sdrop);
		jet_tau2tau1 = Float_t(tau21);
		W_pt = Float_t(ptVlep);
		W_eta = Float_t(yVlep);
		W_phi = Float_t(phiVlep);
		m_lvj = Float_t(candMass);
		fjet2_pt = Float_t(jet2_pt);
		fjet2_btag = Float_t(jet2_btag);
		fjet3_pt = Float_t(jet3_pt);
		fjet3_btag = Float_t(jet3_btag);

		lumiWeight=Identical_lumiWeight;
		weight=lumiWeight*triggerWeight*pileupWeight;
		//`Double_t Mpoint=0.814; 
		// number_qq = number_qq+1;
		Int_t num_bJet=0.;
		for(Int_t i=0; i<6; i++)  {
			if( TMath::Abs(ak4jet_eta[i])>3.14)continue;
			if(ak4jet_pt[i]>30 && ak4jet_icsv[i]>0.814) {num_bJet=num_bJet+1;}
		}
		nbtag=num_bJet;

		Int_t nLooseLep=nLooseEle+nLooseMu;//the tight Lep included

		Double_t isAnaHP=1.;
		Double_t isAnaLP=1.;
		Double_t isTTBarControl=1.;

		if( channel=="el" ){
			//HP: 0<tau21<=0.5;
			if (isAnaHP>0 && lep==11 && isHEEP>0 && nLooseLep==1){ nID_e = nID_e+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && ptlep1>90){ npt_e = npt_e+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && MET_et>80) { nmet_e = nmet_e+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && ptVlep > 200.) { nptVlep = nptVlep +1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && ptVhad>200){ nptVhad = nptVhad+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && num_bJet<1){ nnum_bJet_e = nnum_bJet_e +1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && deltaRlepjet>pi_2) {n_deltaRlepjet = n_deltaRlepjet+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && fabs(delPhijetmet) >2.0)  {n_delPhijetmet = n_delPhijetmet+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && fabs(delPhijetlep)>2.0) {n_delPhijetlep = n_delPhijetlep +1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && tau21>0. && tau21<0.5) {ntau = ntau+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && massVhad>40 && massVhad <130){
				nmassVhad = nmassVhad +1;
				(*file_cutflow)<<"event:"<<event<<endl;
			} else{ isAnaHP=-1; }


			//LP: 0.5<tau21<=0.75;
			if ( lep==11 && isHEEP>0 && nLooseLep==1 && ptlep1>90 && MET_et>80 && ptVlep > 200.  && ptVhad>200 && num_bJet<1 && deltaRlepjet>pi_2 && fabs(delPhijetmet) >2.0 && fabs(delPhijetlep)>2.0 && tau21>0.5 && tau21<=0.75 && massVhad>40 && massVhad <130)
			{ isAnaLP=1.; } 
			else{ isAnaLP=-1.; }

			//TTbar control
			if ( lep==11 && isHEEP>0 && nLooseLep==1 && ptlep1>90 && MET_et>80 && ptVlep > 200.  && ptVhad>200 && num_bJet>0 && deltaRlepjet>pi_2 && fabs(delPhijetmet) >2.0 && fabs(delPhijetlep)>2.0 && tau21>0. && tau21<0.5 && massVhad>40 && massVhad <130)
			{ isTTBarControl=1.; } 
			else{ isTTBarControl=-1.; }



		}
		//mu channel
		if( channel=="mu" ){
			//HP: 0<tau21<=0.5;
			if (isAnaHP>0 && lep==13 && isHighPt>0 && trackIso/ptmu1<0.1 && fabs(etamu1)<2.1 && nLooseLep==1 ) { nID_mu = nID_mu+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && ptlep1>50){ npt_mu = npt_mu+1; }else{ isAnaHP=-1; }
			if (isAnaHP>0 && MET_et>40) { nmet_mu = nmet_mu+1; }else{ isAnaHP=-1; }
			if (isAnaHP>0 && ptVlep>200) { nptVlep = nptVlep +1;} else{ isAnaHP=-1; }
			if (isAnaHP>0 && jet_pt>200){ nptVhad = nptVhad+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && num_bJet<1){ nnum_bJet_mu = nnum_bJet_mu +1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && deltaRlepjet>pi_2) {n_deltaRlepjet = n_deltaRlepjet+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && fabs(delPhijetmet) >2.0)  {n_delPhijetmet = n_delPhijetmet+1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && fabs(delPhijetlep)>2.0) {n_delPhijetlep = n_delPhijetlep +1; } else{ isAnaHP=-1; }
			if (isAnaHP>0 && tau21>0. && tau21<0.5) {ntau = ntau+1;} else{ isAnaHP=-1; }
			if (isAnaHP>0 && massVhad>40 && massVhad <130){ 
				nmassVhad = nmassVhad +1; 
				(*file_cutflow)<<"event:"<<event<<endl;
			} else{ isAnaHP=-1; }

			//LP: 0.5<tau21<=0.75;
			if (isAnaHP>0 && lep==13 && isHighPt>0 && trackIso/ptmu1<0.1 && fabs(etamu1)<2.1 && nLooseLep==1 && ptlep1>50 && MET_et>40 && ptVlep>200 && jet_pt>200 && num_bJet<1 && deltaRlepjet>pi_2 && fabs(delPhijetmet) >2.0 && fabs(delPhijetlep)>2.0 && tau21>0.5 && tau21<0.75 && massVhad>40 && massVhad <130)
			{ isAnaLP=1.; } 
			else{ isAnaLP=-1.; }

			//TTbar control
			if (isAnaHP>0 && lep==13 && isHighPt>0 && trackIso/ptmu1<0.1 && fabs(etamu1)<2.1 && nLooseLep==1 && ptlep1>50 && MET_et>40 && ptVlep>200 && jet_pt>200 && num_bJet>0 && deltaRlepjet>pi_2 && fabs(delPhijetmet) >2.0 && fabs(delPhijetlep)>2.0 && tau21>0. && tau21<0.5 && massVhad>40 && massVhad <130)
			{ isTTBarControl=1.; } 
			else{ isTTBarControl=-1.; }


		}


		Int_t tmp_categoryID_channel=0;
		if(channel=="el") tmp_categoryID_channel=-1;
		if(channel=="mu") tmp_categoryID_channel=1;

		Int_t tmp_categoryID_eventselection=0;
		if(isAnaHP>0)tmp_categoryID_eventselection=1;
		else if(isAnaLP>0)tmp_categoryID_eventselection=2;
		else if(isTTBarControl>0)tmp_categoryID_eventselection=3;
		else tmp_categoryID_eventselection=100;

		CategoryID=tmp_categoryID_channel* tmp_categoryID_eventselection;

		if(TMath::Abs(CategoryID)<10) ExTree->Fill();
	}

	if(channel=="el"){ 
		std::cout << "nID_e" << nID_e << "; npt_e" << npt_e << "; nmet_e" << nmet_e << "; nptVlep" << nptVlep << "; nptVhad" << nptVhad<<"; nnum_bJet_e" << nnum_bJet_e <<"; n_deltaRlepjet"<<n_deltaRlepjet<< "; n_delPhijetmet" << n_delPhijetmet <<"; n_delPhijetlep"<<n_delPhijetlep<<"; ntau"<<ntau<< "; nmassVhad" << nmassVhad << "; number_qq" << number_qq << std::endl;
		(*file_cutflow) << "nID_e" << nID_e << "; npt_e" << npt_e << "; nmet_e" << nmet_e << "; nptVlep" << nptVlep << "; nptVhad" << nptVhad<<"; nnum_bJet_e" << nnum_bJet_e <<"; n_deltaRlepjet"<<n_deltaRlepjet<< "; n_delPhijetmet" << n_delPhijetmet <<"; n_delPhijetlep"<<n_delPhijetlep<<"; ntau"<<ntau<< "; nmassVhad" << nmassVhad << "; number_qq" << number_qq << std::endl;
	}
	if(channel=="mu"){
		std::cout << "nID_mu" << nID_mu << "; npt_mu" << npt_mu << "; nmet_mu" << nmet_mu << "; nptVlep" << nptVlep << "; nptVhad" << nptVhad<< "; nnum_bJet_mu" << nnum_bJet_mu << "; n_deltaRlepjet"<<n_deltaRlepjet<< "; n_delPhijetmet" << n_delPhijetmet <<"; n_delPhijetlep"<<n_delPhijetlep<<"; ntau"<<ntau<< "; nmassVhad" << nmassVhad<< "; number_qq" << number_qq << std::endl;
		(*file_cutflow) << "nID_mu" << nID_mu << "; npt_mu" << npt_mu << "; nmet_mu" << nmet_mu << "; nptVlep" << nptVlep << "; nptVhad" << nptVhad<< "; nnum_bJet_mu" << nnum_bJet_mu << "; n_deltaRlepjet"<<n_deltaRlepjet<< "; n_delPhijetmet" << n_delPhijetmet <<"; n_delPhijetlep"<<n_delPhijetlep<<"; ntau"<<ntau<< "; nmassVhad" << nmassVhad<< "; number_qq" << number_qq << std::endl;
	}
}


