#include<iostream>
using namespace std;
int main()
{
	int BG_c=0,BG_l;
	float BG_x,BG_a=0;
	cout<<"Ingreas la cantidad de numero a sumar: ";
	cin>>BG_l;
	do{

	cout<<"Ingrese un número ";
	cin>>BG_x;
	BG_c=BG_c+1;
	BG_a=BG_a+BG_x;
	}while(BG_c<BG_l);
	cout<< "El resultado fue : "<<BG_a<<endl;
	return 0;
}
