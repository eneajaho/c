
#include <stdio.h>
#include <conio.h>
int main()
{

    int A[8] = {1, 3, 5, 17}, B[] = {34, 4, 6, 8};

    int i, j, tmp, c = 4, d = 0;

    // ciklojme elementet nga 0 ne 8
    for (i = 0; i < 8; i++)
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
            // rritim c me +1 sepse do shtojme nje element te B[]
            A[i] = B[d];
            // d e nisim nga zero, pra marrim elementet e B me radhe nga zero .. nese e marrim B[d] pra
            // ne rastin e pare do jete B[0] .. rritim d dhe kur te shtojme perseri do shtojme B[1] e keshtu me radhe
            d++;
            // rritim d
        }
    }

    for (i = 0; i < 8; i++)
        // afishojme vektorin e ri
        printf("%d ", A[i]);

    getch();
    return 0;
}