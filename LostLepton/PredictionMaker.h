//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan  6 13:07:06 2016 by ROOT version 6.02/05
// from TTree PreSelection/PreSelection
// found on file: /eos/uscms/store/user/lpcsusyhad/SusyRA2Analysis2015/Run2ProductionV5/Spring15v2.TTJets_HT-1200to2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_22_RA2AnalysisTree.root
//////////////////////////////////////////////////////////

#ifndef PredictionMaker_h
#define PredictionMaker_h

#include <TH2.h>
#include <TH1.h>
#include <TProfile.h>
#include "TVector2.h"
#include <cmath>
#include "TEfficiency.h"
#include "TGraphAsymmErrors.h"
#include "TKey.h"
#include <fstream>

#include "LLTools.h"
#include "THEff.h"

// Header file for the classes stored in the TTree if any.
#include <vector>
#include "TLorentzVector.h"

// Options

const bool runOnData = false;  //<-check------------------------
const bool runOnStandardModelMC = true;  //<-check------------------------
const bool runOnSignalMC = false;  //<-check------------------------

bool useTrigger=false;
bool useTriggerEffWeight =false;

const bool useAsymmErrors = true;
const bool applyDiLepCorrection_=true;
const bool applyFilters_=true;

class PredictionMaker {
 public :

  void resetValues();
  bool FiltersPass();
  
  // output variables
  TTree *tPrediction_;

  SearchBins *SearchBins_;

  UShort_t Bin_;
  Int_t isoTracks;
  UShort_t JetsNum_;
  UShort_t selectedIDMuonsNum_, selectedIDIsoMuonsNum_;
  UShort_t selectedIDElectronsNum_, selectedIDIsoElectronsNum_;
  Float_t MTW;
  Float_t muPurityCorrection_;
  Float_t muMTWEff_, elecMTWEff_, mtwCorrectedWeight_;
  Float_t muDiLepContributionMTWAppliedEff_, mtwDiLepCorrectedWeight_;
  Float_t muIsoEff_, muIsoWeight_;
  Float_t muIsoOnlyWeight_, elecIsoOnlyWeight_;
  Float_t muRecoEff_, muRecoWeight_;
  Float_t muAccEff_, muAccWeight_;
  Float_t muTotalWeight_, totalMuons_;
  Float_t elecPurityCorrection_, purityCorrectedWeight_, elecDiLepContributionMTWAppliedEff_;
  Float_t elecIsoEff_, elecIsoWeight_;
  Float_t elecRecoEff_, elecRecoWeight_;
  Float_t elecAccEff_, elecAccWeight_;
  Float_t elecTotalWeight_, totalElectrons_;
  Float_t muDiLepEffMTWAppliedEff_, elecDiLepEffMTWAppliedEff_;
  Float_t expectationReductionIsoTrackEff_;
  Float_t expectationReductionMuIsoTrackEff_,expectationReductionElecIsoTrackEff_,expectationReductionPionIsoTrackEff_, expectationReductionIsoTrackEffCombined_;

  effVec muPurityCorrectionVec_;
  effVec muMTWEffVec_, elecMTWEffVec_;
  effVec muDiLepContributionMTWAppliedEffVec_;
  effVec muIsoEffVec_;
  effVec muRecoEffVec_;
  effVec muAccEffVec_;
  effVec elecPurityCorrectionVec_, elecDiLepContributionMTWAppliedEffVec_;
  effVec elecIsoEffVec_;
  effVec elecRecoEffVec_;
  effVec elecAccEffVec_;
  effVec muDiLepEffMTWAppliedEffVec_, elecDiLepEffMTWAppliedEffVec_;
  effVec expectationReductionIsoTrackEffVec_;
  effVec expectationReductionMuIsoTrackEffVec_,expectationReductionElecIsoTrackEffVec_,expectationReductionPionIsoTrackEffVec_, expectationReductionIsoTrackEffCombinedVec_;

  
  Float_t totalWeight_, totalWeightDiLep_, totalWeightDiLepIsoTrackReduced_,totalWeightDiLepIsoMuTrackReduced_,totalWeightDiLepIsoElecTrackReduced_,totalWeightDiLepIsoPionTrackReduced_,totalWeightDiLepIsoTrackReducedCombined_;
  Float_t muTotalWeightDiLep_, muTotalWeightDiLepIsoTrackReduced_;
  Float_t elecTotalWeightDiLep_, elecTotalWeightDiLepIsoTrackReduced_;

  TProfile *MuMeanWeight_;
  TH1 *MuWeightPerBin_[6];


  // efficiency maps
  TH2Eff *MuMTWHTNJets_;
  TH1Eff *MuDiLepContributionMTWAppliedNJets_;
  TH2Eff *MuIsoActivityPT_;
  TH2Eff *MuRecoActivityPT_;
  TH1Eff *MuDiLepEffMTWAppliedNJets_;
  TH2Eff *MuAccHTMHT_NJets78_;
  TH2Eff *MuAccHTMHT_NJets9Inf_;
  TH2Eff *ElecIsoActivityPT_;
  TH2Eff *ElecRecoActivityPT_;
  TH2Eff *ElecAccHTMHT_NJets78_;
  TH2Eff *ElecAccHTMHT_NJets9Inf_;
  TH2Eff *ExpectationReductionMuIsoTrackHTMHT_NJetsHighEff_, *ExpectationReductionElecIsoTrackHTMHT_NJetsHighEff_, *ExpectationReductionPionIsoTrackHTMHT_NJetsHighEff_;


  TTree          *fChain;   //!pointer to the analyzed TTree or TChain
  Int_t           fCurrent; //!current Tree number in a TChain 

  // Declaration of leaf types
 UInt_t          RunNum;
  UInt_t          LumiBlockNum;
  ULong64_t       EvtNum;
  // vector<TLorentzVector> *bestPhoton;
  Int_t           BTags;
  Bool_t          CSCTightHaloFilter;
  Double_t        DeltaPhi1;
  Double_t        DeltaPhi2;
  Double_t        DeltaPhi3;
  Double_t        DeltaPhi4;
  Bool_t          eeBadSc4Filter;
  Int_t           eeBadScFilter;
  vector<int>     *ElectronCharge;
  vector<TLorentzVector> *Electrons;
  vector<double>  *GenElec_MT2Activity;
  vector<TLorentzVector> *GenEls;
  Double_t        genHT;
  vector<double>  *GenMu_MT2Activity;
  vector<TLorentzVector> *GenMus;
  vector<TLorentzVector> *GenTaus;
  Bool_t          HBHEIsoNoiseFilter;
  Bool_t          HBHENoiseFilter;
  Double_t        HT;
  Int_t           isoElectronTracks;
  Int_t           isoMuonTracks;
  Int_t           isoPionTracks;
  Bool_t          JetID;
  vector<TLorentzVector> *Jets;
  Double_t        METPhi;
  Double_t        METPt;
  Double_t        MHT;
  Double_t        MHT_Phi;
  vector<int>     *MuonCharge;
  vector<TLorentzVector> *Muons;
  Int_t           NJets;
  //  Int_t           NumPhotons;
  Int_t           NVtx;
  /* vector<bool>    *photon_nonPrompt; */
  /* vector<double>  *photon_pfChargedIsoRhoCorr; */
  /* vector<double>  *photon_sigmaIetaIeta; */
  /* vector<TLorentzVector> *photonCands; */
  /* Double_t        puWeight; */
  vector<TLorentzVector> *selectedIDElectrons;
  vector<double>  *selectedIDElectrons_MiniIso;
  vector<double>  *selectedIDElectrons_MTW;
  vector<double>  *selectedIDIsoElectrons_MT2Activity;
  vector<double>  *selectedIDIsoElectrons_MTW;
  vector<double>  *selectedIDIsoMuons_MT2Activity;
  vector<double>  *selectedIDIsoMuons_MTW;
  vector<TLorentzVector> *selectedIDMuons;
  vector<double>  *selectedIDMuons_MiniIso;
  vector<double>  *selectedIDMuons_MTW;
  vector<string>  *TriggerNames;
  vector<int>     *TriggerPass;
  vector<int>     *TriggerPrescales;
  Double_t        Weight;
  //   vector<TLorentzVector> *ZCandidates;

  // List of branches
  TBranch        *b_RunNum;   //!
  TBranch        *b_LumiBlockNum;   //!
  TBranch        *b_EvtNum;   //!
  //TBranch        *b_bestPhoton;   //!
  TBranch        *b_BTags;   //!
  TBranch        *b_CSCTightHaloFilter;   //!
  TBranch        *b_DeltaPhi1;   //!
  TBranch        *b_DeltaPhi2;   //!
  TBranch        *b_DeltaPhi3;   //!
  TBranch        *b_DeltaPhi4;   //!
  TBranch        *b_eeBadSc4Filter;   //!
  TBranch        *b_eeBadScFilter;   //!
  TBranch        *b_ElectronCharge;   //!
  TBranch        *b_Electrons;   //!
  TBranch        *b_GenElec_MT2Activity;   //!
  TBranch        *b_GenEls;   //!
  TBranch        *b_genHT;   //!
  TBranch        *b_GenMu_MT2Activity;   //!
  TBranch        *b_GenMus;   //!
  TBranch        *b_GenTaus;   //!
  TBranch        *b_HBHEIsoNoiseFilter;   //!
  TBranch        *b_HBHENoiseFilter;   //!
  TBranch        *b_HT;   //!
  TBranch        *b_isoElectronTracks;   //!
  TBranch        *b_isoMuonTracks;   //!
  TBranch        *b_isoPionTracks;   //!
  TBranch        *b_JetID;   //!
  TBranch        *b_Jets;   //!
  TBranch        *b_METPhi;   //!
  TBranch        *b_METPt;   //!
  TBranch        *b_MHT;   //!
  TBranch        *b_MHT_Phi;   //!
  TBranch        *b_MuonCharge;   //!
  TBranch        *b_Muons;   //!
  TBranch        *b_NJets;   //!
  //   TBranch        *b_NumPhotons;   //!
  TBranch        *b_NVtx;   //!
  /* TBranch        *b_photon_nonPrompt;   //! */
  /* TBranch        *b_photon_pfChargedIsoRhoCorr;   //! */
  /* TBranch        *b_photon_sigmaIetaIeta;   //! */
  /* TBranch        *b_photonCands;   //! */
  /* TBranch        *b_puWeight;   //! */
  TBranch        *b_selectedIDElectrons;   //!
  TBranch        *b_selectedIDElectrons_MiniIso;   //!
  TBranch        *b_selectedIDElectrons_MTW;   //!
  TBranch        *b_selectedIDIsoElectrons_MT2Activity;   //!
  TBranch        *b_selectedIDIsoElectrons_MTW;   //!
  TBranch        *b_selectedIDIsoMuons_MT2Activity;   //!
  TBranch        *b_selectedIDIsoMuons_MTW;   //!
  TBranch        *b_selectedIDMuons;   //!
  TBranch        *b_selectedIDMuons_MiniIso;   //!
  TBranch        *b_selectedIDMuons_MTW;   //!
  TBranch        *b_TriggerNames;   //!
  TBranch        *b_TriggerPass;   //!
  TBranch        *b_TriggerPrescales;   //!
  TBranch        *b_Weight;   //!
  //   TBranch        *b_ZCandidates;   //!

  PredictionMaker(TTree *tree=0);
  virtual ~PredictionMaker();
  virtual Int_t    Cut(Long64_t entry);
  virtual Int_t    GetEntry(Long64_t entry);
  virtual Long64_t LoadTree(Long64_t entry);
  virtual void     Init(TTree *tree);
  virtual void     Run(std::string effFileName, std::string outputFileName, double HTgen_cut=0.);
  virtual Bool_t   Notify();
  virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef PredictionMaker_cxx
PredictionMaker::PredictionMaker(TTree *tree) : fChain(0) 
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/uscms/store/user/lpcsusyhad/SusyRA2Analysis2015/Run2ProductionV5/Spring15v2.TTJets_HT-1200to2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_22_RA2AnalysisTree.root");
    if (!f || !f->IsOpen()) {
      f = new TFile("/eos/uscms/store/user/lpcsusyhad/SusyRA2Analysis2015/Run2ProductionV5/Spring15v2.TTJets_HT-1200to2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_22_RA2AnalysisTree.root");
    }
    TDirectory * dir = (TDirectory*)f->Get("/eos/uscms/store/user/lpcsusyhad/SusyRA2Analysis2015/Run2ProductionV5/Spring15v2.TTJets_HT-1200to2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_22_RA2AnalysisTree.root:/TreeMaker2");
    dir->GetObject("PreSelection",tree);

  }
  Init(tree);
}

PredictionMaker::~PredictionMaker()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t PredictionMaker::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t PredictionMaker::LoadTree(Long64_t entry)
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

void PredictionMaker::Init(TTree *tree)
{
  // The Init() function is called when the selector needs to initialize
  // a new tree or chain. Typically here the branch addresses and branch
  // pointers of the tree will be set.
  // It is normally not necessary to make changes to the generated
  // code, but the routine can be extended by the user if needed.
  // Init() will be called many times when running on PROOF
  // (once per file to be processed).


  if(runOnData) useTrigger = true;
  if(runOnStandardModelMC || runOnSignalMC) useTriggerEffWeight = true;
  
  // Set object pointer
  // bestPhoton = 0;
   ElectronCharge = 0;
   Electrons = 0;
   GenElec_MT2Activity = 0;
   GenEls = 0;
   GenMu_MT2Activity = 0;
   GenMus = 0;
   GenTaus = 0;
   Jets = 0;
   MuonCharge = 0;
   Muons = 0;
   /* photon_nonPrompt = 0; */
   /* photon_pfChargedIsoRhoCorr = 0; */
   /* photon_sigmaIetaIeta = 0; */
   /* photonCands = 0; */
   selectedIDElectrons = 0;
   selectedIDElectrons_MiniIso = 0;
   selectedIDElectrons_MTW = 0;
   selectedIDIsoElectrons_MT2Activity = 0;
   selectedIDIsoElectrons_MTW = 0;
   selectedIDIsoMuons_MT2Activity = 0;
   selectedIDIsoMuons_MTW = 0;
   selectedIDMuons = 0;
   selectedIDMuons_MiniIso = 0;
   selectedIDMuons_MTW = 0;
   TriggerNames = 0;
   TriggerPass = 0;
   TriggerPrescales = 0;
   // ZCandidates = 0;
  // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);

  fChain->SetBranchAddress("RunNum", &RunNum, &b_RunNum);
  fChain->SetBranchAddress("LumiBlockNum", &LumiBlockNum, &b_LumiBlockNum);
  fChain->SetBranchAddress("EvtNum", &EvtNum, &b_EvtNum);
  //   fChain->SetBranchAddress("bestPhoton", &bestPhoton, &b_bestPhoton);
  fChain->SetBranchAddress("BTags", &BTags, &b_BTags);
  fChain->SetBranchAddress("CSCTightHaloFilter", &CSCTightHaloFilter, &b_CSCTightHaloFilter);
  fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);
  fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);
  fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);
  fChain->SetBranchAddress("DeltaPhi4", &DeltaPhi4, &b_DeltaPhi4);
  fChain->SetBranchAddress("eeBadSc4Filter", &eeBadSc4Filter, &b_eeBadSc4Filter);
  fChain->SetBranchAddress("eeBadScFilter", &eeBadScFilter, &b_eeBadScFilter);
  fChain->SetBranchAddress("ElectronCharge", &ElectronCharge, &b_ElectronCharge);
  fChain->SetBranchAddress("Electrons", &Electrons, &b_Electrons);
  if (!runOnData) fChain->SetBranchAddress("genHT", &genHT, &b_genHT);
  fChain->SetBranchAddress("HBHEIsoNoiseFilter", &HBHEIsoNoiseFilter, &b_HBHEIsoNoiseFilter);
  fChain->SetBranchAddress("HBHENoiseFilter", &HBHENoiseFilter, &b_HBHENoiseFilter);
  fChain->SetBranchAddress("HT", &HT, &b_HT);
  fChain->SetBranchAddress("isoElectronTracks", &isoElectronTracks, &b_isoElectronTracks);
  fChain->SetBranchAddress("isoMuonTracks", &isoMuonTracks, &b_isoMuonTracks);
  fChain->SetBranchAddress("isoPionTracks", &isoPionTracks, &b_isoPionTracks);
  fChain->SetBranchAddress("JetID", &JetID, &b_JetID);
  fChain->SetBranchAddress("Jets", &Jets, &b_Jets);
  fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
  fChain->SetBranchAddress("METPt", &METPt, &b_METPt);
  fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
  fChain->SetBranchAddress("MHT_Phi", &MHT_Phi, &b_MHT_Phi);
  fChain->SetBranchAddress("MuonCharge", &MuonCharge, &b_MuonCharge);
  fChain->SetBranchAddress("Muons", &Muons, &b_Muons);
  fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
  //   fChain->SetBranchAddress("NumPhotons", &NumPhotons, &b_NumPhotons);
  fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
  /* fChain->SetBranchAddress("photon_nonPrompt", &photon_nonPrompt, &b_photon_nonPrompt); */
  /* fChain->SetBranchAddress("photon_pfChargedIsoRhoCorr", &photon_pfChargedIsoRhoCorr, &b_photon_pfChargedIsoRhoCorr); */
  /* fChain->SetBranchAddress("photon_sigmaIetaIeta", &photon_sigmaIetaIeta, &b_photon_sigmaIetaIeta); */
  /* fChain->SetBranchAddress("photonCands", &photonCands, &b_photonCands); */
  //   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
  fChain->SetBranchAddress("selectedIDElectrons", &selectedIDElectrons, &b_selectedIDElectrons);
  fChain->SetBranchAddress("selectedIDElectrons_MiniIso", &selectedIDElectrons_MiniIso, &b_selectedIDElectrons_MiniIso);
  fChain->SetBranchAddress("selectedIDElectrons_MTW", &selectedIDElectrons_MTW, &b_selectedIDElectrons_MTW);
  fChain->SetBranchAddress("selectedIDIsoElectrons_MT2Activity", &selectedIDIsoElectrons_MT2Activity, &b_selectedIDIsoElectrons_MT2Activity);
  fChain->SetBranchAddress("selectedIDIsoElectrons_MTW", &selectedIDIsoElectrons_MTW, &b_selectedIDIsoElectrons_MTW);
  fChain->SetBranchAddress("selectedIDIsoMuons_MT2Activity", &selectedIDIsoMuons_MT2Activity, &b_selectedIDIsoMuons_MT2Activity);
  fChain->SetBranchAddress("selectedIDIsoMuons_MTW", &selectedIDIsoMuons_MTW, &b_selectedIDIsoMuons_MTW);
  fChain->SetBranchAddress("selectedIDMuons", &selectedIDMuons, &b_selectedIDMuons);
  fChain->SetBranchAddress("selectedIDMuons_MiniIso", &selectedIDMuons_MiniIso, &b_selectedIDMuons_MiniIso);
  fChain->SetBranchAddress("selectedIDMuons_MTW", &selectedIDMuons_MTW, &b_selectedIDMuons_MTW);
  fChain->SetBranchAddress("TriggerNames", &TriggerNames, &b_TriggerNames);
  fChain->SetBranchAddress("TriggerPass", &TriggerPass, &b_TriggerPass);
  fChain->SetBranchAddress("TriggerPrescales", &TriggerPrescales, &b_TriggerPrescales);
  if (!runOnData) fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
  //   fChain->SetBranchAddress("ZCandidates", &ZCandidates, &b_ZCandidates);
  Notify();
}

Bool_t PredictionMaker::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void PredictionMaker::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t PredictionMaker::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  return 1;
}
#endif // #ifdef PredictionMaker_cxx
