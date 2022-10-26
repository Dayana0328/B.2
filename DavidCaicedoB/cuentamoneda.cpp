#include <iostream>
using namespace std;
int main ()
{
	float DACB_x,DACB_s=0,DACB_s1=0,DACB_s5=0;
	int DACB_i=0,DACB_l,DACB_i1=0,DACB_i5=0;
	cout<<"Ingrese DACB_l: ";cin>>DACB_l;
	do{

	cout<<"Ingrese DACB_x: ";cin>>DACB_x;
	DACB_i=DACB_i+1;
	DACB_s=DACB_s+DACB_x;
	if(DACB_x==1){
		DACB_i1=DACB_i1+1;
		DACB_s1=DACB_s1+DACB_x;
	}else{

		DACB_i5=DACB_i5+1;
		DACB_s5=DACB_s5+DACB_x;
	}

	}while(DACB_i<DACB_l);
	cout<<"La cantidad de monedas de 25ctv es: "<<DACB_i<<endl;
	cout<<"El valor es: "<<DACB_s<<endl;


	cout<<"La cantidad de monedas de 50ctv$ es: "<<DACB_i1<<endl;
	cout<<"El valor es: "<<DACB_s1<<endl;

	cout<<"La cantidad de monedas de 1dolar es: "<<DACB_i5<<endl;
	cout<<"El valor es: "<<DACB_s5<<endl;
	return 0;
}
