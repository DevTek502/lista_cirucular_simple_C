#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"
using namespace std;

class LIsta
{
	private:
		Nodo *primero;
		Nodo *ultimo;
	public:
		LIsta();
		bool estadoLista();
		void insertarInicio(int);
		void insertarFinal(int);
		void eliminarInicio();
		void eliminarFinal();
		void imprimirLista();
		Nodo * getInicio(); 
		~LIsta();
	protected:
};

#endif
