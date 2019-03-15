#include <iostream>
#include <conio.h>
#include <queue>
#include<stdio.h>
#include <string.h>
#include <cstring>
using namespace std;

struct we{
		int x;
		int y;
		int z;
		
};
    	queue<we>cola;
	
	we *p;
	we aux;
	int opcion;
	char res;
	
void clear();
void menu ();
void ap (int opcion);


int main (){
	int	x = sizeof x;
	int	y = sizeof y;
	int	z = sizeof z;

	
	
	
menu();
	
	getch();
	
	return 0;
}

void menu(){
	system ("color F0" );
clear();
	do{
   cout<< "~~~~~~~~~~MENU:~~~~~~~~~~"<<endl;
   cout << "```````````````````````````````````````````````````"<<endl;
   cout<< "1) Anadir vector"<<endl;
   cout<< "2) Mostrar coordenadas"<<endl;
   cout<< "3) Mostrar Promedio de coordenadas"<<endl;
   cout<< "4) Salir" <<endl;
   cout << "```````````````````````````````````````````````````"<<endl;
   cout<< "Ingrese una opcion: ";
   cin>>opcion;

	ap(opcion);
	switch(opcion){
			case 1: 
					do{
						clear();
						cout<<"-->Ingrese el valor de X: "<<endl;
						cin>>aux.x;
							clear();
						cout<<"-->Ingrese el valor de Y: "<<endl;
						cin>>aux.y;
						clear();
							cout<<"-->Ingrese el valor de Z: "<<endl;
						cin>>aux.z;
						clear();
						cola.push(aux);
						p=&cola.front();

						cout<<"INGRESAR OTRO VECTOR? (Y/N)"<<endl;
    					cin>>res;
  				 		}while(res=='y'|| res=='Y');
				

			break;
			
			      		
			case 2:
			      			clear();
			      			if (cola.empty()) { 
      			  			cout << "EEEEEEE    RRRRRRR     OOOOO     OOOOO   RRRRRRR"<<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR"          <<endl;
				   			cout << "EE         RR    RRR O       O O       O RR    RRR"           <<endl;
				   			cout << "EEEEEEE    RRRRRRRR  O       O O       O RRRRRRRR"          <<endl;
				   			cout << "EE         RR   RR   O       O O       O RR   RR"              <<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR"            <<endl;
				   			cout << "EEEEEEE    RR     RR   OOOOO     OOOOO   RR     RR"          <<endl; 
				   					cout<<""<<endl;;
				   			cout<<""<<endl;;
				 			  cout << "___________________________________________"<<endl;
   					    	 cout << "\nLa cola No contiene Informacion para mostrar"<<endl; 
   					    	 cout << "\nAgrega un Vector!"<<endl; 
   					    	 cout << "___________________________________________"<<endl;
   					   		  cout<<""<<endl;;
				   			cout<<""<<endl;;
   					   			  system("pause");
   					   			  clear();
   				 } 
   				else { 
				   		 	for(int i=1; i<=cola.size();i++)
								{
								aux=*p;
				 				cout << "___________________________________________"<<endl;
								cout<<"X: "<<aux.x<<endl;
								cout<<"Y: "<<aux.y<<endl;
								cout<<"Z: "<<aux.z<<endl;
								cout << "___________________________________________"<<endl;
								cout << ""<<endl;
								cout<<"El peso de X es de: "<<aux.x<<"bytes"<<endl;
								cout<<"El peso de Y es de: "<<aux.y<<"bytes"<<endl;
								cout<<"El valor de Z es de: "<<aux.z<<"bytes"<<endl;


								cout << ":::::::::::::::::::::::::::::::::::::::::::"<<endl;
								p++;
								}
							   p=&cola.front();
							   system("pause");
							   clear();
				  					  } 
							   break;
					 case 3:
					 p=&cola.front();
			                      float px;
		                          float py;
			                      float pz;
			                      int su;
			                      
			                      for(su=0; su<cola.size();su++ ){
				                aux=*p;
				                px=px+aux.x;
				                py=py+aux.y;
				                pz=pz+aux.z;

				                p++;
	}
            	cout<<"Promedio de x"<<(px/su)<<endl;
            	cout<<"Promedio de y"<<(py/su)<<endl;
            	cout<<"Promedio de z"<<(pz/su)<<endl;
							
							system("pause");
			      		     clear();
			      		     break;
				      					p=&cola.front();
											}
		}while(opcion!=4);
										ap(opcion);
										} 
										
										void clear(){
											system("cls");
										}
						
						void ap (int opcion){
						        while ( cin.fail () ){ //validacion si se ingresa una letra.
						                cin.clear();
						                cin.ignore(1000,'\n');
						                system("cls");
						                cout<<"LETRAS NO PERMITIDAS"<<endl;//mensaje de error de ingreso.
						                system("pause");
						                menu();
						        }
						        if (opcion <= 0 ){ //validacion si se ingresa un numero negativo.
						                system("cls");
						                cout<<"los numeros negativos no son validos"<<endl;//mensaje de error de ingreso.2
						                system("pause");
						                menu();
						        }		
						}
