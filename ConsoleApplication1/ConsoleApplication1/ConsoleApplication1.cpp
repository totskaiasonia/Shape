#include"C_Rectangle.h"

int main()
{
    C_Rectangle* rect = new C_Rectangle(10, 10, 25.25, 'A', 5.5, 88);
    std::cout << *rect;
    FILE* pf;
    fopen_s(&pf, "rect.txt", "wt");
    rect->save(pf);
    fclose(pf);
    fopen_s(&pf, "rect.txt", "rt");
    C_Rectangle* rect_2 = new C_Rectangle();
    rect_2->load(pf);
    std::cout << "\n" << *rect_2;
    if(pf != NULL)
        fclose(pf);
}