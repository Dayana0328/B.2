#include<iostream>
using namespace std;
int main()
{
	int DACB_c=0,DACB_l;
	float DACB_x,DACB_a=0;
	cout<<"Ingreas la cantidad de numero a sumar: ";
	cin>>DACB_l;
	do{

	cout<<"Ingrese un número ";
	cin>>DACB_x;
	DACB_c=DACB_c+1;
	DACB_a=DACB_a+DACB_x;
	}while(DACB_c<DACB_l);
	cout<< "El resultado fue : "<<DACB_a<<endl;
	return 0;
}
