#include <stdio.h>
#include <conio.h>
int main()
{
    int nr, mod, c = 0, i = 0, tmp;
    //skanon numrin
    scanf("%d", &nr);
    int t[nr];
    //ciklon derisa numri te behet 0 duke pjestuar me 2 dhe duke mbajtur vetem mbetjen me 2
    while (nr > 0)
    {
        mod = nr % 2;
        nr = nr / 2;
        // c numeron sa her eshte kryer pjestimi me 2
        c++;

        t[i] = mod;
        i++;
    }

    for (i = 0; i < c; i++)
    {
        tmp = t[i];
        t[i] = t[c - 1];
        t[c - 1] = tmp;
    }

    for (i = 0; i < c; i++)
        printf("%d ", t[i]);

    getch();
    return 0;
}
