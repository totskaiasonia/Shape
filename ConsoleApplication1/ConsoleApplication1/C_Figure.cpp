#include "C_Figure.h"
C_Figure::C_Figure()
{
	this->pos_x = this->pos_y = 0;
	this->name = 'A';
	this->square = 0;
}
C_Figure::C_Figure(int pos_x, int pos_y, float square, char name)
{
	this->pos_x = pos_x;
	this->pos_y = pos_y;
	this->square = square;
	this->name = name;
}
void C_Figure::save(FILE* to)
{
	if (to != nullptr)
	{
		char* tmp = new char[100];

		tmp[0] = this->name;
		fputc(tmp[0], to);

		strcpy_s(tmp, 100, "\n");
		fputs(tmp, to);

		_itoa_s(this->pos_x, tmp, 100, 10);
		fputs(tmp, to);

		strcpy_s(tmp, 100, "\n");
		fputs(tmp, to);

		_itoa_s(this->pos_y, tmp, 100, 10);
		fputs(tmp, to);

		strcpy_s(tmp, 100, "\n");
		fputs(tmp, to);

		_itoa_s(this->square, tmp, 100, 10);
		fputs(tmp, to);
	}
}
void C_Figure::load(FILE* from)
{
	if (from != nullptr)
	{
		char* tmp = new char[20];

		this->name = (fgets(tmp, 20, from))[0];
		this->pos_x = atoi(fgets(tmp, 20, from));
		this->pos_y = atoi(fgets(tmp, 20, from));
		this->square = atoi(fgets(tmp, 20, from));
	}
}
C_Figure::~C_Figure()
{

}