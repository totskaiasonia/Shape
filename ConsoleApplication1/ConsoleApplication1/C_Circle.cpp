#include "C_Circle.h"
C_Circle::C_Circle() : C_Figure()
{
	this->radius = 0;
}
C_Circle::C_Circle(float pos_x, float pos_y, float square, char name, float radius) :
	C_Figure(pos_x, pos_y, square, name)
{
	this->radius = radius;
}

void C_Circle::save(FILE* to)
{
	C_Figure::save(to);
	char* tmp = new char[100];

	strcpy_s(tmp, 100, "\n");
	fputs(tmp, to);

	int radius = this->radius * 100;
	int fr_part = radius % 100;

	_itoa_s(this->radius, tmp, 100, 10);
	fputs(tmp, to);

	tmp[0] = '.';
	fputc(tmp[0], to);

	_itoa_s(fr_part, tmp, 100, 10);
	fputs(tmp, to);
}
void C_Circle::load(FILE* from)
{
	C_Figure::load(from);
	char* tmp = new char[20];
	this->radius = atof(fgets(tmp, 20, from));
}