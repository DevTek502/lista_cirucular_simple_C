#include <iostream>
#include <conio.h>
#include "Lista.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Lista listaDoble;
	int numero;
	int opMenu;	 	
	 do{
        system("cls");//para borrar en pantalla cuando repita el menu
        cout<<"--Menu--"<<endl;
        cout<<"1. Instear al Inicio "<<endl;
        cout<<"2. Insertar al Final "<<endl;
        cout<<"3. Eliminar al Inicio"<<endl;
        cout<<"4. Eliminar al Final"<<endl;
        cout<<"5. Imprimir Lista"<<endl;
        cout<<"6. Salir"<<endl<<endl;
        cout<<"INGRESE LA OPCION QUE DESEE REALIZAR: ";
        cin>>opMenu;

        switch (opMenu)
        {
            case 1:
            	cout<<"Ingrese un numero: ";
            	cin>>numero;
            	listaDoble.insertarInicio(numero);
                break;

            case 2:
            	cout<<"Ingrese un numero: ";
            	cin>>numero;
            	listaDoble.insertarFinal(numero);
            	break;
            	
            case 3:
            	listaDoble.eliminarInicio();
            	break;
            	
            case 4:
            	listaDoble.eliminarFinal();
            	break;
            	
            case 5: 
            	listaDoble.imprimirLista();
				getch();        	
                break; 
        }

    }while(opMenu != 6);
	return 0;
}
