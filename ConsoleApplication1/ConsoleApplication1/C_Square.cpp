#include "C_Square.h"
C_Square::C_Square() : C_Figure()
{
	this->side_length = 0;
}
C_Square::C_Square(float pos_x, float pos_y, float square, char name, float side_length) :
	C_Figure(pos_x, pos_y, square, name)
{
	this->side_length = side_length;
}