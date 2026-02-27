{
  Int_t N = 1000;
  
  TRandom3 rng;

  TFile* file = TFile::Open("tree.root", "RECREATE");

  TTree tree("tree", "random tree");
  Double_t x;
  tree.Branch("x", &x, "x/D");
  for (UInt_t i = 0; i < N; i++) {
    x = rng.Gaus(0.0, 1.0);
    tree.Fill();
  }

  file->Write();
  file->Close();
}
