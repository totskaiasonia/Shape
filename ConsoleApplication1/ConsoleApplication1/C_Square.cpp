#include "C_Square.h"
C_Square::C_Square() : C_Figure()
{
	this->side_length = 0;
}
C_Square::C_Square(int pos_x, int pos_y, float square, char name, int side_length) :
	C_Figure(pos_x, pos_y, square, name)
{
	this->side_length = side_length;
}

void C_Square::save(FILE* to)
{
	C_Figure::save(to);
	char* tmp = new char[100];

	strcpy_s(tmp, 100, "\n");
	fputs(tmp, to);

	_itoa_s(this->side_length, tmp, 100, 10);
	fputs(tmp, to);
	rewind(to);
}
void C_Square::load(FILE* from)
{
	C_Figure::load(from);
	char* tmp = new char[20];
	this->side_length = atoi(fgets(tmp, 20, from));
}