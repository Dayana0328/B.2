#include <iostream>
using namespace std;
int main ()
{
	float DP_x,DP_s=0,DP_s1=0,DP_s5=0;
	int DP_i=0,DP_l,DP_i1=0,DP_i5=0;
	cout<<"Ingrese DP_l: ";cin>>DP_l;
	do{

	cout<<"Ingrese DP_x: ";cin>>DP_x;
	DP_i=DP_i+1;
	DP_s=DP_s+DP_x;
	if(DP_x==1){
		DP_i1=DP_i1+1;
		DP_s1=DP_s1+DP_x;
	}else{

		DP_i5=DP_i5+1;
		DP_s5=DP_s5+DP_x;
	}

	}while(DP_i<DP_l);
	cout<<"La cantidad de monedas de 25ctv es: "<<DP_i<<endl;
	cout<<"El valor es: "<<DP_s<<endl;


	cout<<"La cantidad de monedas de 50ctv es: "<<DP_i1<<endl;
	cout<<"El valor es: "<<DP_s1<<endl;

	cout<<"La cantidad de monedas de 1dolar es: "<<DP_i5<<endl;
	cout<<"La cantidad de moneda es: "<<DP_s5<<endl;
	return 0;
}
