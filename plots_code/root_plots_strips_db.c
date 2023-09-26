void root_plots_strips_db(){

const char *a[2];
a[0] = "45";
a[1] = "56";

const char *b[4];
b[0] = "fr_bt";
b[1] = "fr_hr";
b[2] = "fr_tp";
b[3] = "nr_hr";

const char *c[2];
c[0] = "fr_bt";
c[1] = "fr_tp";

TCanvas *c1 = new TCanvas("c1", "c1", 10,10,900,2*700);
c1->Divide(2,6);
TFile *file0 = TFile::Open("DQM_V0001_CTPPS_R000369585_srips.root");
TH2F* hh = nullptr;
TH1F* hh1 = nullptr;

for(int i =0;i<2;i++){

    for(int j=0;j<4;j++){
        char result[200];
        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/track XY profile", a[i], b[j]);
        file0->GetObject(result, hh);
        c1->cd(1);
        hh->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/vfats with any problem", a[i], b[j]);
        file0->GetObject(result, hh);
        c1->cd(2);
        hh->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 01/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(3);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 02/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(4);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 03/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(5);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 04/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(6);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 05/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(7);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 06/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(8);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 07/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(9);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 08/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(10);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 09/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(11);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 210/%s/plane 10/digi profile", a[i], b[j]);
        file0->GetObject(result, hh1);
        c1->cd(12);
        hh1->Draw("COLZ TEXT");
        
        sprintf(result, "strips_%s_210_%s_db.pdf", a[i], b[j]);
        c1->SaveAs(result);
    }


    for(int j=0;j<2;j++){
        char result[200];
        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/track XY profile", a[i], c[j]);
        file0->GetObject(result, hh);
        c1->cd(1);
        hh->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/vfats with any problem", a[i], c[j]);
        file0->GetObject(result, hh);
        c1->cd(2);
        hh->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 01/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(3);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 02/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(4);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 03/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(5);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 04/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(6);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 05/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(7);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 06/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(8);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 07/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(9);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 08/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(10);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 09/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(11);
        hh1->Draw("COLZ TEXT");

        sprintf(result, "/DQMData/Run 369585/CTPPS/Run summary/TrackingStrip/sector %s/station 220/%s/plane 10/digi profile", a[i], c[j]);
        file0->GetObject(result, hh1);
        c1->cd(12);
        hh1->Draw("COLZ TEXT");
        
        sprintf(result, "strips_%s_220_%s_db.pdf", a[i], b[j]);
        c1->SaveAs(result);
    }

}
}