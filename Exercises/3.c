#include <stdio.h>
#include <conio.h>

void negativ_0(int v[], int n)
{
    int i;
    //kontrollojme nese jemi ne rastin e sigurte
    if (n == 0)
    {
        if (v[n] < 0)
        {
            v[n] = 0;
            return;
        }
        return;
    }

    if (v[n] < 0)
    {
        v[n] = 0;
        return;
    }
    return;

    negativ_0(v, n - 1);

    for (i = 0; i < 5; i++)
        printf("%d ", v[i]);
}

int main()
{
    int i, n = 5, v[5] = {1, -1, 2, -3, 4};

    negativ_0(v, n);

    getch();
    return 0;
}
