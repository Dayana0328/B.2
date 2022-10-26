#include <iostream>
using namespace std;                              int main ()                                       {                                                         float DP_x,DP_s=0,DP_vb,DP_iva=12,DP_pdesc=10,DP_vdesc,DP_vn;
        int DP_i=0,DP_l;                              cout<<"Ingrese DACB_l: ";cin>>DP_l;             do{                                                       cout<<"Ingrese DACB_x: ";cin>>DP_x;                                                               DP_i=DP_i+1;                                  DP_s=DP_s+DP_x;
        }while(DP_i<DP_l);
        DP_vb=DP_s;
        DP_iva=DP_vb*DP_iva/100;
        DP_vdesc=DP_vb*DP_pdesc/100;                DP_vn=DP_vb+DP_iva-DP_vdesc;              cout<<"El valor a pagar es de: "<<DP_vn<<endl;
        return 0;
}
