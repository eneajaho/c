
#include <stdio.h>
#include <conio.h>
int main()
{

    int A[9] = {2, 5, 1, 8, 11};

    int i, j, tmp, c = 5, d = 0;

    // ciklojme elementet nga 0 ne 8
    for (i = 0; i < 9; i++)
    {
        // shohim nese i eshte tek .. pra ne pozicione tek do shtojme elementet e B[]
        if (i % 2 == 1)
        {
            // ke marre c=4 i cili eshte numri i elementeve per momentin ne vektor
            // krijojme nje cikel i cili zhvendos elementet e vektorit me 1 pozicion
            // j e nisim nga c dhe shkojme deri tek elementi i. me hap -1
            for (j = c; j >= i; j--)
                A[j] = A[j - 1];
            // ky me lart eshte cikli qe coi Frensi
            c++;
            // rritim c me +1 sepse do shtojme nje element te ri
            A[i] = A[i + 1] - A[i - 1];
        }
    }

    for (i = 0; i < 9; i++)
        // afishojme vektorin e ri
        printf("%d ", A[i]);

    getch();
    return 0;
}