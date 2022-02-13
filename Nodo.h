#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo
{
	private:
		int dato;
		Nodo *siguiente;	
	public:
		Nodo(int);
		void setDato(int);
		int getDato();
		void setSiguiente(Nodo *);
		Nodo *getSiguiente();
		~Nodo();
	protected:
};

#endif
