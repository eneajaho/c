#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    int vl;
    struct peme *majte;
    struct peme *djathte;

} peme;

peme *krijoElement(int vl)
{
    peme *p = (peme *)malloc(sizeof(peme));
    p->vl = vl;
    p->djathte = NULL;
    p->majte = NULL;
}

int afisho(peme *T)
{
    if (T == NULL)
        return 0;
    int resM = afisho(T->majte);
    int resD = afisho(T->djathte);
    printf("%d %d", resM, resD);
    return T->vl;
}

void paraRendore(peme *T)
{
    if (T != NULL)
    {
        printf("%d ", T->vl);
        paraRendore(T->majte);
        paraRendore(T->djathte);
    }
}

void nderRendore(peme *T)
{
    if (T != NULL)
    {
        nderRendore(T->majte);
        printf("%d ", T->vl);
        nderRendore(T->djathte);
    }
}

void pasRendore(peme *T)
{
    if (T != NULL)
    {
        pasRendore(T->majte);
        pasRendore(T->djathte);
        printf("%d ", T->vl);
    }
}

peme *KrijoPemeBinareParaRendore(int n)
{
    peme *kulmiri;
    int x, sasiM, sasiD;
    if (n == 0)
        return NULL;
    sasiM = n / 2;
    sasiD = n - sasiM - 1;
    scanf("%d", &x);
    kulmiri = krijoElement(x);
    kulmiri->majte = KrijoPemeBinareParaRendore(sasiM);
    //kulmiri=krijoElement(x);nderrendore
    kulmiri->djathte = KrijoPemeBinareParaRendore(sasiD);
    //kulmiri=krijoElement(x);pasrendore
    return kulmiri;
}

int nrNyje(peme *T)
{
    if (T == NULL)
        return 0;
    int resM = nrNyje(T->majte);
    int resD = nrNyje(T->djathte);
    return 1 + resM + resD;
}

int shuma(peme *T)
{
    if (T == NULL)
        return 0;
    int resM = shuma(T->majte);
    int resD = shuma(T->djathte);
    return T->vl + resM + resD;
}

int nrNegativ(peme *T)
{
    if (T == NULL)
        return 0;
    int resM = nrNegativ(T->majte);
    int resD = nrNegativ(T->djathte);
    if (T->vl < 0)
        return 1 + resM + resD;
    return resM + resD;
}

// int nrNegativ(peme *T)
// {
//     if (T == NULL)
//         return 0;
//     int resM = nrNegativ(T->majte);
//     int resD = nrNegativ(T->djathte);
//     return (T->vl < 0 ? 1 + resD + resM : resM + resD);
// }

int max(peme *T)
{
    if (T == NULL)
        return -9999;
    int resM = max(T->majte);
    int resD = max(T->djathte);
    if (T->vl > resM && T->vl > resD)
        return T->vl;
    return (resM > resD ? resM : resD);
}

int max(peme *T)
{
    if (T == NULL)
        return -9999;
    int resM = max(T->majte);
    int resD = max(T->djathte);
    return (T->vl > resM && T->vl > resD ? T->vl : (resM > resD ? resM : resD))
}

int nrGjethe(peme *T)
{
    if (T == NULL)
        return 0;
    if (T->majte == NULL && T->djathte == NULL)
        return 1;
    int resM = nrGjethe(T->majte);
    int resD = nrGjethe(T->djathte);
    return resM + resD;
}

int nrNyjeBrendshme(peme *T)
{
    if (T == NULL)
        return 0;
    if (T->majte == NULL && T->djathte == NULL)
        return 0;
    int resM = nrNyjeBrendshme(T->majte);
    int resD = nrNyjeBrendshme(T->djathte);

    return 1 + resM + resD;
}

int lartesi(peme *T)
{
    if (T == NULL)
        return 0;
    int resM = lartesi(T->majte);
    int resD = lartesi(T->djathte);
    if (resM > resD)
        return 1 + resM;
    return 1 + resD;
}

int largesiRrugeMax(peme *T)
{
    if (T == NULL)
        return 0;
    if (T->majte == NULL && T->djathte == NULL)
        return 0;
    int resM = largesiRrugeMax(T->majte);
    int resD = largesiRrugeMax(T->djathte);
    if (resM > resD)
        return resM;
    return resD;
}

// boolean identike(peme *T1, peme *T2)
// {
//     if (T1 == NULL && T2 == NULL)
//         return true;
//     if (T1 == NULL && T2 != NULL || T1 != NULL && T2 == NULL)
//         return false;
//     if (T1->vl != T2->vl)
//         return false;
//     int resM = identike(T1->majte, T2->majte);
//     if (!resM)
//         return false;
//     int resD = identike(T1->djathte, T2->djathte);
//     return resD;
// }

int maxpoz(int v[], int n)
{
    if (n == 1)
        return 0;
    int poz = maxpoz(v, n - 1);
    if (v[n - 1] > v[poz])
        return n - 1;
    return poz;
}

int main()
{
    printf("fillim\n");
    struct peme *T = KrijoPemeBinareParaRendore(7);
    paraRendore(T);
    printf("\n");
    nderRendore(T);
    printf("\n");
    pasRendore(T);
    printf("\n");
    printf("Numri i elementeve eshte %d\n", nrNyje(T));
    printf("Shume e elementeve eshte %d\n", shuma(T));
    printf("\nfund");
    return 0;
}
