
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{

    int i, j, mod, nr, c = 0, numri = 1, fuqi;
    int start;

    scanf("%d", &nr);
    while (nr > 0)
    {
        nr = nr / 10;
        c++;
    }
    printf("jane %d elemente \n", c);

    for (i = 0; i < c; i++)
    {
        // gjene fuqine
        fuqi = pow(2, i);
        printf("Fuqia eshte: %d\n", fuqi);
        mod = nr % 10;
        nr = nr / 10;
        numri += (mod * fuqi);
        printf("Numri: %d\n", numri);
    }

    getch();
    return 0;
}