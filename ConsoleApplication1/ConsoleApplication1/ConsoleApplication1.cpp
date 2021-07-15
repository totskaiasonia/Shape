#include"C_Square.h"

int main()
{
    C_Square* sq = new C_Square(10, 10, 25.25, 'A', 5.5);
    std::cout << *sq;
    FILE* pf;
    fopen_s(&pf, "square.txt", "wt");
    sq->save(pf);
    if(pf != NULL)
        fclose(pf);
}