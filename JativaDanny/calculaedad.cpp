#include <iostream> 
 using namespace std; 
  int main () 
	 { 
		          int DJ_aa,DJ_ma,DJ_da,DJ_an,DJ_mn,DJ_dn,DJ_a,DJ_m,DJ_d; 
		           cout<<"Ingrese la fecha actual :";cin>>DACB_aa>>DJ_ma>>DJ_da; 
		            cout<<"Ingrese la fecha de nacimiento: ";cin>>DJ_an>>DJ_mn>>DJ_dn; 
		      
		                   if(DJ_da>DJ_dn){ 
			       
			                      DJ_d=DJ_da-DJ_dn; 
			        
			               }else{ 
				                        DJ_da=DJ_da+30; 
					                 DJ_ma=DJ_ma-1; 
					                  DJ_d=DJ_da-DJ_dn; 
					           } 
		       
		                    if(DJ_ma>DJ_mn){ 
			                
				                        DJ_m=DJ_ma-DJ_mn; 
			         
			                }else{ 
					  
					                 DJ_ma=DJ_ma+12; 
					                  DJ_aa=DJ_aa-1; 
					                   DJ_m=DJ_ma-DJ_mn; 
					            } 
		                       DJ_a=DJ_aa-DJ_an; 
		         
		                cout<<"Usted tiene "<<DJ_a<<" años, "<<DJ_m<<" meses,"<<DJ_d<<" dias"<<endl; 
			         return 0; 
			           
				   }
