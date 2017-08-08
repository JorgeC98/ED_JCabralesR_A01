#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Punto {
private:
	string dim;
	int x, y, z;
public:
	void setX(int x);
	int getX(void);
	void setY(int y);
	int getY(void);
	void setZ(int z);
	int getZ(void);
	void setDim(string dim);
	string getDim(void);
	Punto(int coorx, int coory, int coorz);
	Punto(int coorx, int coory);
	Punto();

}

Punto::Punto(int coorx, int coory, int coorz) {
	x = coorx;
	y = coory;
	z = coorz;
	dim = "3 dimensiones";
}

Punto::Punto(int coorx, int coory) {
	x = coorx;
	y = coory;
	dim = "2 dimensiones";
}

Punto::Punto() {
	x = 0;
	y = 0;
	z = 0;
	dim = "Sin dimensiones";
}

void Punto::setX(int coorx) {
	x = coorx;

}

int Punto::getX() {
	return x;
}

void Punto::setY(int coory) {
	y = coory;

}

int Punto::getY() {
	return y;
}

void Punto::setZ(int coorz) {
	z = coorz;

}

int Punto::getZ() {
	return z;
}

void Punto::setDim(string dim) {
	dim = dim;

}

string Punto::getDim() {
	return dim;
}

