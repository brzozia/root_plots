void root_plots_diamond_xml(){

int multi = 1;
TCanvas *c1 = new TCanvas("c1", "c1", 10,10,900,multi*700);
c1->Divide(2,multi*3);

TFile *file0 = TFile::Open("DQM_V0001_CTPPS_R000370749_xml.root");
TH2F* hh = nullptr;
file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220/nr_hr/Efficiency in channels", hh);
c1->cd(1);
hh->Draw("COLZ TEXT");

TH1F* hh1 = nullptr;
file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220/nr_hr/plane 0/digi profile", hh1);
c1->cd(2);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220/nr_hr/plane 1/digi profile", hh1);
c1->cd(3);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220/nr_hr/plane 2/digi profile", hh1);
c1->cd(4);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220/nr_hr/plane 3/digi profile", hh1);
c1->cd(5);
hh1->Draw("COLZ TEXT");

c1->SaveAs("diamond_45_220_nrhr_xml.pdf");

//------

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220cyl/cyl_hr/Efficiency in channels", hh);
c1->cd(1);
hh->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220cyl/cyl_hr/plane 0/digi profile", hh1);
c1->cd(2);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220cyl/cyl_hr/plane 1/digi profile", hh1);
c1->cd(3);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220cyl/cyl_hr/plane 2/digi profile", hh1);
c1->cd(4);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 45/station 220cyl/cyl_hr/plane 3/digi profile", hh1);
c1->cd(5);
hh1->Draw("COLZ TEXT");

c1->SaveAs("diamond_45_220_cylhr_xml.pdf");


//------

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220/nr_hr/Efficiency in channels", hh);
c1->cd(1);
hh->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220/nr_hr/plane 0/digi profile", hh1);
c1->cd(2);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220/nr_hr/plane 1/digi profile", hh1);
c1->cd(3);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220/nr_hr/plane 2/digi profile", hh1);
c1->cd(4);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220/nr_hr/plane 3/digi profile", hh1);
c1->cd(5);
hh1->Draw("COLZ TEXT");

c1->SaveAs("diamond_56_220_nrhr_xml.pdf");

//--------


file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220cyl/cyl_hr/Efficiency in channels", hh);
c1->cd(1);
hh->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220cyl/cyl_hr/plane 0/digi profile", hh1);
c1->cd(2);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220cyl/cyl_hr/plane 1/digi profile", hh1);
c1->cd(3);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220cyl/cyl_hr/plane 2/digi profile", hh1);
c1->cd(4);
hh1->Draw("COLZ TEXT");

file0->GetObject("/DQMData/Run 370749/CTPPS/Run summary/TimingDiamond/sector 56/station 220cyl/cyl_hr/plane 3/digi profile", hh1);
c1->cd(5);
hh1->Draw("COLZ TEXT");

c1->SaveAs("diamond_56_220_cylhr_xml.pdf");

}