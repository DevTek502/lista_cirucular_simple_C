#include "LIsta.h"

LIsta::LIsta()
{
	this->primero=NULL;
	this->ultimo=NULL;
}

bool LIsta::estadoLista()
{
	if(this->primero==NULL && this->ultimo==NULL)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void LIsta::insertarInicio(int numero)
{
	Nodo *nuevoNodo = new Nodo(numero);
	if(estadoLista()==true)
	{
		this->primero=nuevoNodo;
		this->ultimo=nuevoNodo;
		this->ultimo->setSiguiente(this->primero);
	}
	else
	{
		nuevoNodo->setSiguiente(this->primero);
		this->primero=nuevoNodo;
		this->ultimo->setSiguiente(this->primero);
	}
}

void LIsta::insertarFinal(int numero)
{
	Nodo *nuevoNodo = new Nodo(numero);
	if(estadoLista()==true)
	{
		this->primero=nuevoNodo;
		this->ultimo=nuevoNodo;
		this->ultimo->setSiguiente(this->primero);
	}
	else
	{
		this->ultimo->setSiguiente(nuevoNodo);
		this->ultimo=nuevoNodo;
		this->ultimo->setSiguiente(this->primero);
	}
}

void LIsta::eliminarInicio()
{
	if(estadoLista()==true)
	{
		cout<<"No hay elemento que eliminar"<<endl;
	}
	else
	{
		if(this->primero==this->ultimo)
		{
			this->primero=NULL;
			this->ultimo=NULL;
		}
		else
		{
			Nodo *auxPrimero = this->primero;
			this->primero = this->primero->getSiguiente();
			auxPrimero->setSiguiente(NULL);
			this->ultimo->setSiguiente(this->primero);
			delete auxPrimero;
		}
	}
}

void LIsta::eliminarFinal()
{
	if(estadoLista()==true)
	{
		cout<<"No hay elemento que eliminar"<<endl;
	}
	else
	{
		if(this->primero==this->ultimo)
		{
			this->primero=NULL;
			this->ultimo=NULL;
		}
		else
		{
			Nodo *auxPrimero = this->primero;
			//busqueda de nuestro penultimo nodo dento de la lista
			while(auxPrimero->getSiguiente()!=this->ultimo)
			{
				auxPrimero = auxPrimero->getSiguiente();
			}
			Nodo *auxUltimo = this->ultimo;
			auxPrimero->setSiguiente(NULL);
			this->ultimo = auxPrimero;
			this->ultimo->setSiguiente(this->primero);
			delete auxUltimo;			
		}
	}
}

Nodo * LIsta::getInicio()
{
	Nodo *auxPrimero = this->primero;
	if(estadoLista()==true)
	{
		return NULL;
	}
	else
	{
		return auxPrimero;
	}
}

LIsta::~LIsta()
{
}
