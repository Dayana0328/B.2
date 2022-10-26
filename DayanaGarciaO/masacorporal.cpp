#include <iostream>
using namespace std;
int main () 
{
	float DG_imc,DG_peso,DG_altura;
	cout<<"Ingrese el DG_peso (kg): ";cin>>DG_peso;
	cout<<"Ingrese la DG_altura (metros): ";cin>>DG_altura;
	DG_imc=DG_peso/(DG_altura*DG_altura)
		;
	if(DG_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(DG_imc>=18.5 && DG_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(DG_imc>=25 && DG_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(DG_imc>=27 && DG_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(DG_imc>=30 && DG_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(DG_imc>=35 && DG_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(DG_imc>=40 && DG_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(DG_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
