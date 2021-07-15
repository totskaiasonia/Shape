#pragma once
#include "C_Figure.h"
class C_Square :
    public C_Figure
{
protected:
    int side_length;
public:
    C_Square();
    C_Square(int pos_x, int pos_y, float square, char name, int side_length);

    void save(FILE* to);
    void load(FILE* from);

    friend std::ostream& operator <<(std::ostream& out, const C_Square& figure)
    {
        out << "Name: " << figure.name << "\tPosition: (" << figure.pos_x << ";" << figure.pos_y << ")\tSquare: " << figure.square << "\tSide: " << figure.side_length;
        return out;
    }

};