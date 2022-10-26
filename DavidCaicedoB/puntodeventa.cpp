#include <iostream>
using namespace std;                              int main ()                                       {                                                         float DACB_x,DACB_s=0,DACB_vb,DACB_iva=12,DACB_pdesc=10,DACB_vdesc,DACB_vn;
        int DACB_i=0,DACB_l;                              cout<<"Ingrese DACB_l: ";cin>>DACB_l;             do{                                                       cout<<"Ingrese DACB_x: ";cin>>DACB_x;                                                               DACB_i=DACB_i+1;                                  DACB_s=DACB_s+DACB_x;
        }while(DACB_i<DACB_l);
        DACB_vb=DACB_s;
        DACB_iva=DACB_vb*DACB_iva/100;
        DACB_vdesc=DACB_vb*DACB_pdesc/100;                DACB_vn=DACB_vb+DACB_iva-DACB_vdesc;              cout<<"El valor a pagar es de: "<<DACB_vn<<endl;
        return 0;
}
