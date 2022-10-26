#include <iostream>
using namespace std;
int main ()
{
	float BG_x,BG_s=0,BG_vb,piva=12,viva,pdesc=10,vdesc,vn;
	int BG_i=0,BG_l;
	cout<<"Ingrese BG_l: ";cin>>BG_l;
	do{
		cout<<"Ingrese BG_x: ";cin>>BG_x;
		BG_i=BG_i+1;
		BG_s=BG_s+BG_x;
	}while(BG_i<BG_l);
	BG_vb=BG_s;
	viva=BG_vb*piva/100;
	vdesc=BG_vb*pdesc/100;
	vn=BG_vb+viva-vdesc;
	cout<<"El valor a pagar es de: "<<vn<<endl;
	return 0;
}
