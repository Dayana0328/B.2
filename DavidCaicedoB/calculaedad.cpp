#include <iostream>
using namespace std;
int main ()
{
	int DACB_aa,DACB_ma,DACB_da,DACB_an,DACB_mn,DACB_dn,DACB_a,DACB_m,DACB_d;
	cout<<"Ingrese la fecha actual :";cin>>DACB_aa>>DACB_ma>>DACB_da;
	cout<<"Ingrese la fecha de nacimiento: ";cin>>DACB_an>>DACB_mn>>DACB_dn;

      	if(DACB_da>DACB_dn){

		DACB_d=DACB_da-DACB_dn;

	}else{
		DACB_da=DACB_da+30;
		DACB_ma=DACB_ma-1;
		DACB_d=DACB_da-DACB_dn;
	}

      	if(DACB_ma>DACB_mn){
	
		DACB_m=DACB_ma-DACB_mn;

	}else{

		DACB_ma=DACB_ma+12;
		DACB_aa=DACB_aa-1;
		DACB_m=DACB_ma-DACB_mn;
	}
                DACB_a=DACB_aa-DACB_an;

	cout<<"Usted tiene "<<DACB_a<<" años, "<<DACB_m<<" meses,"<<DACB_d<<" dias"<<endl;
	return 0;
	
}
