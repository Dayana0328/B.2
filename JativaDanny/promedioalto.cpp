#include <iostream> 
 using namespace std; 
 int main () 
 { 
         float DJ_x,DJ_pm=0; 
         int DJ_i=0,DJ_l; 
         cout<<"Ingrese DJ_l: ";cin>>DJ_l; 
         do{ 
          
         cout<<"Ingrese DJ_x: ";cin>>DJ_x; 
         DJ_i=DJ_i+1; 
         if(DJ_x>DJ_pm){ 
                 DJ_pm=DJ_x; 
         } 
          
         }while(DJ_i<DJ_l); 
         cout<<"El promedio mas alto es: "<<DJ_pm<<endl; 
         return 0; 
 }
