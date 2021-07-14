#pragma once
#include "C_Figure.h"
class C_Square :
    public C_Figure
{
protected:
    float side_length;
public:
    C_Square();
    C_Square(float pos_x, float pos_y, float square, char name, float side_length);
    friend std::ostream& operator <<(std::ostream& out, const C_Square& figure)
    {
        out << "Name: " << figure.name << "\tPosition: (" << figure.pos_x << ";" << figure.pos_y << ")\tSquare: " << figure.square << "\tSide: " << figure.side_length;
        return out;
    }
};