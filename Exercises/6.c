
#include <stdio.h>
#include <conio.h>
int main()
{

    // deklarojme variablen
    int T[7] = {23, 12, 8, 13, 16, 87, 75};

    int i, j, tmp;

    // afishojme tabelen
    for (i = 0; i < 7; i++)
        printf("%d ", T[i]);
    printf("\n");

    // ciklojme numrat
    for (i = 0; i < 7; i++)
    {
        // nese numri eshte tek atehere nuk i bejme gje, thjesht continue per te vazhduar tek numri tjeter //
        if (T[i] % 2 == 1)
            continue;
        // nese numri eshte cift atehere krijojme nje cikel te ri per te gjetur nese ka numra te tjere tek qe tu ndryshojme vendet.
        if (T[i] % 2 == 0)
            // ciklimi fillon nga i ne menyre qe ato qe jane me perpara mos tu ndryshojme me vendet sepse jane ne rregull
            for (j = i; j <= 7; j++)
                // nese numri qe gjen cikli eshte tek atehere .. i ndryshojme vendet me T[i] qe kishim
                if (T[j] % 2 == 1)
                {
                    // algoritmi i ndryshimit te vendeve
                    tmp = T[i];
                    T[i] = T[j];
                    T[j] = tmp;
                    // shkruajme break sepse numrin qe deshem e rregulluam dhe keshtu vazhdojme direkt tek tjetri .
                    break;
                }
    }

    // afishojme tabelen e re
    for (i = 0; i < 7; i++)
        printf("%d ", T[i]);

    getch();
    return 0;
}