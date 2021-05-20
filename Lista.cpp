#include "Lista.h"

Lista::Lista()
{
	this->primero = NULL;
	this->ultimo = NULL;
}

//estado Lista
bool Lista::estadoLista()
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

void Lista::insertarInicio(int dato)
{
	Nodo *nuevoElemento = new Nodo(dato);
	if(estadoLista()==true)
	{
		this->primero = nuevoElemento;
		this->ultimo = nuevoElemento;
	}
	else
	{
		nuevoElemento->setSiguiente(this->primero);
		this->primero->setAnterior(nuevoElemento);
		this->primero=nuevoElemento;
	}
}

void Lista::insertarFinal(int dato)
{
	Nodo *nuevoElemento = new Nodo(dato);
	if(estadoLista() == true)
	{
		this->primero = nuevoElemento;
		this->ultimo = nuevoElemento;
	}
	else
	{
		this->ultimo->setSiguiente(nuevoElemento);
		nuevoElemento->setAnterior(this->ultimo);
		this->ultimo = nuevoElemento;
	}
}

void Lista::eliminarInicio()
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
			this->primero->setAnterior(NULL);
			delete auxPrimero;
		}
	}
}

void Lista::eliminarFinal()
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
			Nodo *auxUltimo = this->ultimo;
			this->ultimo = this->ultimo->getAnterior();
			this->ultimo->setSiguiente(NULL);
			auxUltimo->setAnterior(NULL);
			delete auxUltimo;
		}
	}
}


void Lista::imprimirLista()
{
	if(estadoLista()==true)
	{
		cout<<"No hay elmentos dentro de nuestra lista"<<endl;
	}
	else
	{
		Nodo *nodoActual = this->primero;
		while(nodoActual!=NULL)
		{
			cout<<"Nodo: "<<nodoActual->getDato()<<"<--->";
			nodoActual = nodoActual->getSiguiente();
		}
	}
}

Lista::~Lista()
{
}
