#include <iostream>
using namespace std;
int main ()
{
	float DACB_x,DACB_s=0;
	int DACB_i=0,DACB_l;
	cout<<"Ingrese cantidad de egresos (DACB_l): ";cin>>DACB_l;
	cout<<"Ingrese saldo inicial (DACB_s): ";cin>>DACB_s;
	
	do{
	cout<<"Ingrese egreso(DACB_x): ";cin>>DACB_x;
	DACB_i=DACB_i+1;
	DACB_s=DACB_s+DACB_x;

	}while(DACB_i<DACB_l);
	cout<<"El saldo final es: "<<DACB_s<<endl;
	return 0;
}
