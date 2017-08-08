#include <iostream>
using namespace std;

class AP {
protected:
	int a, p;
public:
	int getP(void);
	int getA(void);
	void setP(int p);
	void setA(int a);
};

void AP::setP(int per) {
	p = per;

}

int AP::getP() {
	return p;
}

void AP::setA(int area) {
	a = area;

}

int AP::getA() {
	return a;
}

class Circulo :public AP {
private:
	int r;
public:
	int getP(void);
	int getA(void);
	int getR(void);
	void setP(int p);
	void setA(int a);
	void setR(int r);
	Circulo(int rad, int per, int area);
	Circulo(int rad, int per);
	Circulo(int rad, int area);
	Circulo(int per, int area);
	Circulo(int rad);
	Circulo(int per);
	Circulo(int area);
	Circulo();
}

Circulo::Circulo(int rad, int per, int area)
{
	r = rad;
	p = per;
	a = area;
}

Circulo::Circulo(int rad, int per) {
	r = rad;
	p = per;
}

Circulo::Circulo(int rad, int area) {
	r = rad;
	a = area;
}

Circulo::Circulo(int per, int area) {
	p = per;
	a = area;
}

Circulo::Circulo(int rad) {
	r = rad;
}

Circulo::Circulo(int per) {
	p = per;
}

Circulo::Circulo(int area) {
	a = area;
}
Circulo::Circulo() {
}

void Circulo::setR(int rad) {
	r = rad;

}

int Circulo::getR() {
	return r;
}

void Circulo::setP(int per) {
	p = per;

}

int Circulo::getP() {
	return p;
}

void Circulo::setA(int area) {
	a = area;

}

int Circulo::getA() {
	return a;
}