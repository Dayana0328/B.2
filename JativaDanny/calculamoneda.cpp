#include <iostream>
using namespace std;
int main ()
{
		float DJ_x,DJ_s=0,DJ_s1=0,DJ_s5=0;
			int DJ_i=0,DJ_l,DJ_i1=0,DJ_i5=0;
				cout<<"Ingrese DJ_l: ";cin>>DJ_l;
					do{

							cout<<"Ingrese DJ_x: ";cin>>DJ_x;
								DJ_i=DJ_i+1;
									DJ_s=DJ_s+DJ_x;
										if(DJ_x==1){
													DJ_i1=DJ_i1+1;
															DJ_s1=DJ_s1+DJ_x;
																}else{

																			DJ_i5=DJ_i5+1;
																					DJ_s5=DJ_s5+DJ_x;
																						}

											}while(DJ_i<DJ_l);
						cout<<"La cantidad de monedas de 25ctv es: "<<DJ_i<<endl;
						cout<<"El valor es: "<<DJ_s<<endl;


							cout<<"La cantidad de monedas de 50ctv es: "<<DJ_i1<<endl;
								cout<<"El valor es: "<<DJ_s1<<endl;

									cout<<"La cantidad de monedas de 1dolar es: "<<DJ_i5<<endl;
										cout<<"La cantidad de moneda es: "<<DJ_s5<<endl;
											return 0;
}
