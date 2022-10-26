#include<iostream>
using namespace std;
int main()
{
        int JDPM_c=0,JDPM_l;
        float JDPM_x,JDPM_a=0;
        cout<<"Ingreas la cantidad de numero a sumar: ";
        cin>>JDPM_l;
        do{

        cout<<"Ingrese un número ";
        cin>>JDPM_x;
        JDPM_c=JDPM_c+1;
        JDPM_a=JDPM_a+JDPM_x;
        }while(JDPM_c<JDPM_l);
        cout<< "El resultado fue : "<<JDPM_a<<endl;
        return 0;
}
