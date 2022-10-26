#include <iostream>
using namespace std;
int main ()
{
	float DP_x,DP_pm=0;
	int DP_i=0,DP_l;
	cout<<"Ingrese l: ";cin>>DP_l;
	do{
	
	cout<<"Ingrese x: ";cin>>DP_x;
	DP_i=DP_i+1;
	if(DP_x>DP_pm){
		DP_pm=DP_x;
	}
	
	}while(DP_i<DP_l);
	cout<<"El promedio maximo del curso es: "<<DP_pm<<endl;
	return 0;
}
