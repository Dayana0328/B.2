#include <iostream>
using namespace std;
int main ()
{
	float DG_x,DG_pm=0;
	int DG_i=0,DG_l;
	cout<<"Ingrese DG_l: ";cin>>DG_l;
	do{
	
	cout<<"Ingrese DG_x: ";cin>>DG_x;
	DG_i=DG_i+1;
	if(DG_x>DG_pm){
		DG_pm=DG_x;
	}
	
	}while(DG_i<DG_l);
	cout<<"El promedio mas alto es: "<<DG_pm<<endl;
	return 0;
}
