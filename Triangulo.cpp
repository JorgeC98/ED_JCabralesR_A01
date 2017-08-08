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

class Triangulo :public AP {
private:
	int r, b, alt, h, s, cs, t;

public:
	int getP(void);
	int getA(void);
	int getR(void);
	int getB(void);
	int getAlt(void);
	int getH(void);
	int getS(void);
	int getCs(void);
	int getT(void);
	void setP(int p);
	void setA(int a);
	void setR(int r);
	void setB(int b);
	void setAlt(int alt);
	void setH(int h);
	void setS(int s);
	void setCs(int cs);
	void setT(int t);
	Triangulo(int rad, int base, int hip, int alt, int sen, int csen, int tan, int per, int area);
	Triangulo(int rad, int base, int hip, int alt, int sen, int csen, int tan, int per);
	Triangulo(int rad, int base, int hip, int alt, int sen, int csen, int tan, int area);
	Triangulo(int rad, int base, int hip, int alt, int sen, int csen, int tan);
	Triangulo();
}

Triangulo::Triangulo(int rad, int base, int hip, int alt, int sen, int csen, int tan, int per, int area)
{
	r = rad;
	b = base;
	this->alt = alt;
	s = sen;
	cs = csen;
	p = per;
	a = area;
	t = tan;
}

Triangulo::Triangulo(int rad, int base, int hip, int alt, int sen, int csen, int tan, int per) {
	r = rad;
	p = per;
}

Triangulo::Triangulo(int rad, int base, int hip, int alt, int sen, int csen, int tan, int area) {
	r = rad;
	a = area;
}

Triangulo::Triangulo(int rad, int base, int hip, int alt, int sen, int csen, int tan) {

}

Triangulo::Triangulo() {

}


void Triangulo::setP(int per) {
	p = per;

}

int Triangulo::getP() {
	return p;
}

void Triangulo::setA(int area) {
	a = area;

}

int Triangulo::getA() {
	return a;
}

void Triangulo::setR(int rad) {
	r = rad;

}

int Triangulo::getR() {
	return r;
}

void Triangulo::setB(int base) {
	r = base;

}

int Triangulo::getB() {
	return b;
}

void Triangulo::setAlt(int alt) {
	this->alt = alt;

}

int Triangulo::getAlt() {
	return alt;
}

void Triangulo::setH(int hip) {
	h = hip;

}

int Triangulo::getH() {
	return h;

}
void Triangulo::setS(int sen) {
	s = sen;

}

int Triangulo::getS() {
	return s;

}
void Triangulo::setCs(int Csen) {
	cs = Csen;

}

int Triangulo::getCs() {
	return cs;

}
void Triangulo::setT(int tan) {
	t = tan;

}

int Triangulo::getT() {
	return t;

}