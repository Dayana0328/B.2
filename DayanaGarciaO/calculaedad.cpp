#include <iostream>
using namespace std;
int main ()
{
	int DG_aa,DG_ma,DG_da,DG_an,DG_mn,DG_dn,DG_a,DG_m,DG_d;
	cout<<"Ingrese la fecha actual :";cin>>DG_aa>>DG_ma>>DG_da;
	cout<<"Ingrese la fecha de nacimiento: ";cin>>DG_an>>DG_mn>>DG_dn;

      	if(DG_da>DG_dn){

		DG_d=DG_da-DG_dn;

	}else{
		DG_da=DG_da+30;
		DG_ma=DG_ma-1;
		DG_d=DG_da-DG_dn;
	}

      	if(DG_ma>DG_mn){
	
		DG_m=DG_ma-DG_mn;

	}else{

		DG_ma=DG_ma+12;
		DG_aa=DG_aa-1;
		DG_m=DG_ma-DG_mn;
	}
                DG_a=DG_aa-DG_an;

	cout<<"Usted tiene "<<DG_a<<" años, "<<DG_m<<" meses,"<<DG_d<<" dias"<<endl;
	return 0;
	
}
