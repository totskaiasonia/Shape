#include "C_Rectangle.h"
C_Rectangle::C_Rectangle() : C_Square()
{
	this->height = 0;
}
C_Rectangle::C_Rectangle(float pos_x, float pos_y, float square, char name, float side_length, float height) :
	C_Square(pos_x, pos_y, square, name, side_length)
{
	this->height = height;
}

void C_Rectangle::save(FILE* to)
{
	C_Square::save(to);
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
}
void C_Rectangle::load(FILE* from)
{
	C_Square::load(from);
	char* tmp = new char[20];
	this->height = atof(fgets(tmp, 20, from));
}