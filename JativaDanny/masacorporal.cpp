#include <iostream>
using namespace std;
int main () 
{
	float DJ_imc,DJ_peso,DJ_altura;
	cout<<"Ingrese el DJ_peso (kg): ";cin>>DJ_peso;
	cout<<"Ingrese la DJ_altura (metros): ";cin>>DJ_altura;
	DJ_imc=DJ_peso/(DJ_altura*DJ_altura)
		;
	if(DJ_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(DJ_imc>=18.5 && DJ_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(DJ_imc>=25 && DJ_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(DJ_imc>=27 && DJ_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(DJ_imc>=30 && DJ_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(DJ_imc>=35 && DJ_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(DJ_imc>=40 && DJ_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(DJ_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
