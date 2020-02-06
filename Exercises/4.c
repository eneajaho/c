
#include <stdio.h>
#include <conio.h>
#include <string.h>

//gjej shumen e vargut -2+4-6+8-10
int gjejshumen(int n)
{
    int sh;
    if (n % 2 == 1)
        sh = -1;
    else
        sh = 1;
    //kontrollojme nese jemi ne rastin e sigurte
    if (n == 1)
        return 2 * sh;

    int a = gjejshumen(n - 1);
    //kthejme rezultatin
    return a + n * 2 * sh;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", gjejshumen(n));
    getch();
    return 0;
}
