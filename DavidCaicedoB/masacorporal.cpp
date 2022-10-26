#include <iostream>
using namespace std;
int main () 
{
	float DACB_imc,DACB_peso,DACB_altura;
	cout<<"Ingrese el DACB_peso (kg): ";cin>>DACB_peso;
	cout<<"Ingrese la DACB_altura (metros): ";cin>>DACB_altura;
	DACB_imc=DACB_peso/(DACB_altura*DACB_altura)
		;
	if(DACB_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(DACB_imc>=18.5 && DACB_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(DACB_imc>=25 && DACB_imc<26.9){
		cout<<"Usted tiene sobrepeso grado 1"<<endl;
	}

	if(DACB_imc>=27 && DACB_imc<29.9){
		cout<<"Usted tiene sobrepeso grado 2"<<endl;
	}

	if(DACB_imc>=30 && DACB_imc<34.9){
		cout<<"Usted tiene obesidad tipo 1"<<endl;
	}

	if(DACB_imc>=35 && DACB_imc<39.9){
		cout<<"Usted tiene obesidad tipo 2"<<endl;
	}

	if(DACB_imc>=40 && DACB_imc<49.9){
		cout<<"Usted tiene obesidad tipo 3 (mórbida)"<<endl;
	}

	if(DACB_imc>=50){
		cout<<"Usted tiene obesidad tipo 4 (extrema)"<<endl;
	}
	return 0;
}
