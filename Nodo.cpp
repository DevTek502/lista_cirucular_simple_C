#include "Nodo.h"

Nodo::Nodo(int dato)
{
	this->dato = dato;
	this->siguiente = NULL;
	this->anterior = NULL;
}

//get y set 
int Nodo::getDato()
{
	return dato;
} 

void Nodo::setDato(int dato)
{
	this->dato = dato;
}

Nodo * Nodo::getSiguiente()
{
	return siguiente;
}

void Nodo::setSiguiente(Nodo *info)
{
	this->siguiente = info;
}

Nodo * Nodo::getAnterior()
{
	return anterior;
}

void Nodo::setAnterior(Nodo *info)
{
	this->anterior = info;
}

Nodo::~Nodo()
{
}
