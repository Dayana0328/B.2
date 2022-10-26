#include<iostream>
using namespace std;
int main()
{
	int DJ_c=0,DJ_l;
	float DJ_x,DJ_a=0;
	cout<<"Ingreas la cantidad de numero a sumar: ";
	cin>>DJ_l;
	do{

	cout<<"Ingrese un número ";
	cin>>DJ_x;
	DJ_c=DJ_c+1;
	DJ_a=DJ_a+DJ_x;
	}while(DJ_c<DJ_l);
	cout<< "El resultado fue : "<<DJ_a<<endl;
	return 0;
}
