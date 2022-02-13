#include "Nodo.h"

Nodo::Nodo(int dato)
{
	this->dato=dato;
	this->siguiente=NULL;
}

//metodos get y set 
void Nodo::setDato(int dato)
{
	this->dato=dato;
}

int Nodo::getDato()
{
	return dato;
}

void Nodo::setSiguiente(Nodo *apuntador)
{
	this->siguiente=apuntador;
}

Nodo * Nodo::getSiguiente()
{
	return siguiente;
}

Nodo::~Nodo()
{
}

