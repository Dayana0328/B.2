#include <iostream>
using namespace std;
int main ()
{
	float DACB_x,DACB_pm=0;
	int DACB_i=0,DACB_l;
	cout<<"Ingrese DACB_l: ";cin>>DACB_l;
	do{
	
	cout<<"Ingrese DACB_x: ";cin>>DACB_x;
	DACB_i=DACB_i+1;
	if(DACB_x>DACB_pm){
		DACB_pm=DACB_x;
	}
	
	}while(DACB_i<DACB_l);
	cout<<"El promedio mas alto es: "<<DACB_pm<<endl;
	return 0;
}
