
#include <stdio.h>
#include <stdlib.h>

void vektoridentike(n)
{
    int i, v1[n], v2[n], count;
    for (i = 1; i <= n; i++)
    {
        printf("Jep %d vlerat e vektorit te pare", n);
        scanf("%d", &v1[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("Jep %d vlerat e vektorit te dyte", n);
        scanf("%d", &v2[i]);
    }
    for (i = 1; i <= n; i++)
        if (v1[i] == v2[i])
            count++;
    if (count = 0)
        printf("Vektoret nuk jane identike");
    else if (count = n)
        printf("Vektoret jane identike");
}

void increment(int *v)
{
    (*v)++;
}
int main()
{
    int a;
    scanf("%d", &a);
    increment(&a);
    increment(&a);
    printf("%d", a);
    return 0;
}

void min_max()
{
    int madhesia = 10;
    int i, Vek[madhesia];
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &Vek[i]);
    }

    int ciftm = Vek[1], tekm = Vek[1];

    for (i = 1; i <= 10; i++)
    {
        if (Vek[i] % 2 == 0)
            if (Vek[i] > ciftm)
                ciftm = Vek[i];
        if (Vek[i] % 2 == 1)
            if (Vek[i] > tekm)
                tekm = Vek[i];
    }
    printf("%d %d", tekm, ciftm);
}

int main(int argc, char *argv[])
{
    min_max();
    return 0;
}
