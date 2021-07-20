#include "C_Elipse.h"
C_Elipse::C_Elipse() : C_Figure()
{
	this->height = this->width = 0;
}
C_Elipse::C_Elipse(float pos_x, float pos_y, float square, char name, float height, float width) :
	C_Figure(pos_x, pos_y, square, name)
{
	this->height = height;
	this->width = width;
}

void C_Elipse::save(FILE* to)
{
	C_Figure::save(to);
	char* tmp = new char[100];

	strcpy_s(tmp, 100, "\n");
	fputs(tmp, to);

	int height = this->height * 100;
	int fr_part = height % 100;

	_itoa_s(this->height, tmp, 100, 10);
	fputs(tmp, to);

	tmp[0] = '.';
	fputc(tmp[0], to);

	_itoa_s(fr_part, tmp, 100, 10);
	fputs(tmp, to);

	strcpy_s(tmp, 100, "\n");
	fputs(tmp, to);

	int width = this->width * 100;
	fr_part = width % 100;

	_itoa_s(this->width, tmp, 100, 10);
	fputs(tmp, to);

	tmp[0] = '.';
	fputc(tmp[0], to);

	_itoa_s(fr_part, tmp, 100, 10);
	fputs(tmp, to);
}
void C_Elipse::load(FILE* from)
{
	C_Figure::load(from);
	char* tmp = new char[20];
	this->height = atof(fgets(tmp, 20, from));
	this->width = atof(fgets(tmp, 20, from));
}