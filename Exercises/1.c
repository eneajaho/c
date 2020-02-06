#include <stdio.h>

int palindrom(int n)
{
    int t = n, a = 0;

    while (t != 0)
    {
        a = a * 10;
        a = a + t % 10;
        t = t / 10;
    }
    if (n == a)
        return 1;
    else
        return 0;
}

int main()
{
    int n, vek[4] = {11, 323, 47474, 80800}, max = -1;

    for (int i = 0; i < 4; i++)
    {
        if (palindrom(vek[i]))
            if (vek[i] > max)
                max = vek[i];
    }
    printf("Numri me i madh palindrom: %d\n", max);
    return 0;
}