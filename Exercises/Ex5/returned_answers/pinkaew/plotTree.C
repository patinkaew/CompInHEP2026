{
  TFile* infile = TFile::Open("tree.root", "READ");
  TTree* tree = (TTree*)infile->Get("tree");
  Double_t x;
  tree->SetBranchAddress("x", &x);
  
  TCanvas* c = new TCanvas("c", "", 500, 500);
  c->cd();
  c->SetFillColor(kWhite);

  TH1D* h = new TH1D("normal", "N(#mu=0.0,#sigma=1.0);Random Variable;Entries", 20, -5, 5); 
  h->SetDirectory(0);

  for (UInt_t i = 0 ; i < tree->GetEntries(); i++) {
    tree->GetEntry(i);
    h->Fill(x);
  }
  
  h->SetFillColor(kYellow);
  h->SetLineWidth(3);
  h->Draw();

  h->Fit("gaus");
  TF1* f = h->GetFunction("gaus");
  f->SetLineColor(kRed);
  f->SetLineWidth(3);

  c->SaveAs("plot.pdf");
  c->SaveAs("plot.png");

  infile->Close();
}
