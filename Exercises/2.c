
#include <stdio.h>
#include <string.h>

struct student
{
    char emer[10];
    char mbiemer[10];
    char gjinia[10];
    int mosha;
    int notat[2];
};

struct lenda
{
    char em[10];
    int kredite;
};

int main()
{

    int m, n;
    printf("jep nr te studenteve: ");
    scanf("%d", &m);
    printf("jep nr te lendeve: ");
    scanf("%d", &n);
    struct student S[n];
    struct lenda L[m];

    for (int j = 0; j < n; j++)
    {
        printf("lenda %d:  ", j + 1);
        scanf("%s", L[j].em);
        printf("kredite: ");
        scanf("%d", &L[j].kredite);
    }
    printf("vendosni te dhenat e studenteve: \n");
    for (int i = 0; i < m; i++)
    {
        printf("studenti %d\n", i + 1);
        printf("emri: ");
        scanf("%s", S[i].emer);
        printf("mbiemri: ");
        scanf("%s", S[i].mbiemer);
        printf("gjinia: ");
        scanf("%s", S[i].gjinia);
        printf("mosha: ");
        scanf("%d", S[i].mosha);
        printf("vendosni notat: ");
        for (int j = 0; j < n; j++)
        {
            scanf("%d", L[i].em);
            scanf("%d", S[i].notat[j]);
        }
    }

    return 0;
}