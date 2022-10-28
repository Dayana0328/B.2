#include <iostream>
using namespace std;
int main () 
{
	float DP_imc,DP_peso,DP_altura;
	cout<<"Ingrese el DP_peso (kg): ";cin>>DP_peso;
	cout<<"Ingrese la DP_altura (metros): ";cin>>DP_altura;
	DP_imc=DP_peso/(DP_altura*DP_altura)
		;
	if(DP_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(DP_imc>=18.5 && DP_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(DP_imc>=25 && DP_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(DP_imc>=27 && DP_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(DP_imc>=30 && DP_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(DP_imc>=35 && DP_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(DP_imc>=40 && DP_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(DP_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
