#include <iostream>
using namespace std;
int main ()
{
        float DP_x,DP_s=0;
        int DP_i=0,DP_l;
        cout<<"Ingrese cantidad de egresos (DP_l): ";cin>>DP_l;
        cout<<"Ingrese saldo inicial (DP_s): ";cin>>DP_s;

        do{
        cout<<"Ingrese egreso(DP_x): ";cin>>DP_x;
        DP_i=DP_i+1;
        DP_s=DP_s+DP_x;

        }while(DP_i<DP_l);
        cout<<"El saldo final es: "<<DP_s<<endl;
        return 0;
}
