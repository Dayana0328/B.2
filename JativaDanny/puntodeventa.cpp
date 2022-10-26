#include <iostream> 
 using namespace std;                              int main ()                                       {                                                         float DJ_x,DJ_s=0,DJ_vb,DJ_iva=12,DJ_pdesc=10,DJ_vdesc,DJ_vn; 
         int DJ_i=0,DJ_l;                              cout<<"Ingrese DJ_l: ";cin>>DJ_l;             do{                                                       cout<<"Ingrese DJ_x: ";cin>>DJ_x;                                                               DJ_i=DJ_i+1;                                  DJ_s=DJ_s+DJ_x; 
         }while(DJ_i<DJ_l); 
         DJ_vb=DJ_s; 
         DJ_iva=DJ_vb*DJ_iva/100; 
         DJ_vdesc=DJ_vb*DJ_pdesc/100;                DJ_vn=DJ_vb+DJ_iva-DJ_vdesc;              cout<<"El valor a pagar es de: "<<DJ_vn<<endl; 
         return 0; 
 }
