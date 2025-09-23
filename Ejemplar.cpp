#include "Ejemplar.h"
#include <iostream>
#include <vector>
#include <algorithm>


int Ejemplar::getCodigo() {
	return codigo;
}

Ejemplar::Tipo Ejemplar::getTipo() const
{
	return tipo;
}
std::istream& operator>>(std::istream& is, Ejemplar& ej)
{
	char c;
	is >> ej.codigo >> c >> ej.nombre;
	switch (c)
	{
	case ('A'): ej.tipo = Ejemplar::Tipo::A; break;
	case ('J'): ej.tipo = Ejemplar::Tipo::J; break;
	case ('L'): ej.tipo = Ejemplar::Tipo::L; break;
	}
	return is;
}

