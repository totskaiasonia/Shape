#include"C_Rectangle.h"

int main()
{
    C_Rectangle* rects_1 = new C_Rectangle[5];
    rects_1[0] = C_Rectangle(10, 10, 13.33, 'A', 2.4, 2);
    rects_1[1] = C_Rectangle(20, 11, 33.33, 'B', 2.7, 2);
    rects_1[2] = C_Rectangle(30, 12, 43.33, 'C', 10.3, 2);
    rects_1[3] = C_Rectangle(40, 13, 23.33, 'D', 3.7, 2);
    rects_1[4] = C_Rectangle(50, 14, 88.88, 'E', 13.7, 2);
    FILE* pf;
    fopen_s(&pf, "rects.txt", "wt");
    for (int i = 0; i < 5; i++)
    {
        rects_1[i].save(pf);
    }
    fclose(pf);
    fopen_s(&pf, "rects.txt", "rt");
    C_Rectangle* rects_2 = new C_Rectangle[5];
    for (int i = 0; i < 5; i++)
    {
        rects_2[i].load(pf);
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << rects_2[i] << "\n";
    }
    fclose(pf);
}