#include <iostream>
using namespace std;

int main(){

    int bf_brnz, af_brnz;
    int bf_slvr, af_slvr;
    int bf_gld, af_gld;
    int bf_plat, af_plat;


    cin >> bf_brnz >> af_brnz;
    cin >> bf_slvr >>af_slvr;
    cin >> bf_gld >> af_gld;
    cin >> bf_plat >> af_plat;

    int prt_frm_gld_plat = af_plat - bf_plat;
    int prt_frm_slvr_gld = (af_gld - bf_gld) + prt_frm_gld_plat;
    int prt_frm_brnz_slvr = (af_slvr - bf_slvr) + prt_frm_slvr_gld;


    cout << prt_frm_brnz_slvr << "\n"<< prt_frm_slvr_gld <<"\n"<< prt_frm_gld_plat;

    return 0;
    

}