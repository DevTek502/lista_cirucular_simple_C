#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo
{
	private:
		//variable informacion
		int dato;
		//apuntadores
		Nodo *siguiente;
		Nodo *anterior;
	public:
		Nodo(int);
		int getDato();
		void setDato(int);
		Nodo * getSiguiente();
		void setSiguiente(Nodo *);
		Nodo * getAnterior();
		void setAnterior(Nodo *);
		~Nodo();
	protected:
};

#endif
