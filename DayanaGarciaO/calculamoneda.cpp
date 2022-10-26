#include <iostream>
using namespace std;
int main ()
{
	float DG_x,DG_s=0,DG_s1=0,DG_s5=0;
	int DG_i=0,DG_l,DG_i1=0,DG_i5=0;
	cout<<"Ingrese DG_l: ";cin>>DG_l;
	do{

	cout<<"Ingrese DG_x: ";cin>>DG_x;
	DG_i=DG_i+1;
	DG_s=DG_s+DG_x;
	if(DG_x==1){
		DG_i1=DG_i1+1;
		DG_s1=DG_s1+DG_x;
	}else{

		DG_i5=DG_i5+1;
		DG_s5=DG_s5+DG_x;
	}

	}while(DG_i<DG_l);
	cout<<"La cantidad de monedas de 25ctv es: "<<DG_i<<endl;
	cout<<"El valor es: "<<DG_s<<endl;


	cout<<"La cantidad de monedas de 50ctv es: "<<DG_i1<<endl;
	cout<<"El valor es: "<<DG_s1<<endl;

	cout<<"La cantidad de monedas de 1dolar es: "<<DG_i5<<endl;
	cout<<"La cantidad de moneda es: "<<DG_s5<<endl;
	return 0;
}
