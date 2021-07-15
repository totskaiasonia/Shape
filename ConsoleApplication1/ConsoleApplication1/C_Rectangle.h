#pragma once
#include "C_Square.h"
class C_Rectangle final:
    public C_Square
{
public:
    C_Rectangle();
    C_Rectangle(float pos_x, float pos_y, float square, char name, float side_length, float height);

    //void save(FILE* pf) override;

    friend std::ostream& operator <<(std::ostream& out, const C_Rectangle& figure)
    {
        out << "Name: " << figure.name << "\tPosition: (" << figure.pos_x << ";" << figure.pos_y << ")\tSquare: " << figure.square << "\tHeight: " << figure.height << "\t Width: " << figure.side_length;
        return out;
    }
private:
    float height;
};

