#include <iostream>
using namespace std;
int main ()
{
	float DG_x,DG_s=0;
	int DG_i=0,DG_l;
	cout<<"Ingrese cantidad de egresos (DG_l): ";cin>>DG_l;
	cout<<"Ingrese saldo inicial (DG_s): ";cin>>DG_s;
	
	do{
	cout<<"Ingrese egreso(DG_x): ";cin>>DG_x;
	DG_i=DG_i+1;
	DG_s=DG_s+DG_x;

	}while(DG_i<DG_l);
	cout<<"El saldo final es: "<<DG_s<<endl;
	return 0;
}
