#pragma once
class Ejemplar
{
public:
	// getCodigo(), getTipo(), getNombre() const friend operator>>(istream&, Ejemplar&)

	enum Tipo {A, L, J};
	Ejemplar(int c, Tipo t, std::string& n)
		: codigo(c), tipo(t), nombre(n)
	{ }

	int getCodigo();
	Tipo getTipo() const;
	friend std::istream& operator>>(std::istream&, Ejemplar&);

private:
	int codigo;
	Tipo tipo;
	std::string nombre;
};

