#include "C_Figure.h"
C_Figure::C_Figure()
{
	this->pos_x = this->pos_y = 0;
	this->name = 'A';
	this->square = 0;
}
C_Figure::C_Figure(float pos_x, float pos_y, float square, char name)
{
	this->pos_x = pos_x;
	this->pos_y = pos_y;
	this->square = square;
	this->name = name;
}
void C_Figure::save()
{

}
void C_Figure::load()
{
	
}