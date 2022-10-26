#include <iostream> 
 using namespace std; 
 int main () 
 { 
         float DJ_x,DJ_s=0; 
         int DJ_i=0,DJ_l; 
         cout<<"Ingrese cantidad de egresos (DJ_l): ";cin>>DJ_l; 
         cout<<"Ingrese saldo inicial (DJ_s): ";cin>>DJ_s; 
          
         do{ 
         cout<<"Ingrese egreso(DJ_x): ";cin>>DJ_x; 
         DJ_i=DJ_i+1; 
         DJ_s=DJ_s+DJ_x; 
  
         }while(DJ_i<DJ_l); 
         cout<<"El saldo final es: "<<DJ_s<<endl; 
         return 0; 
 }
