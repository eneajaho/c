#include <stdio.h>
#include <stdlib.h>

struct nyje
{
    int vl;
    struct nyje *pas;
};

struct nyje *krijoNyje(int vlera)
{
    struct nyje *eliri;
    eliri = (struct nyje *)malloc(sizeof(struct nyje));
    eliri->vl = vlera;
    eliri->pas = NULL;
}

struct nyje *hiqFillim(struct nyje *koka)
{
    if (koka == NULL)
    {
        printf("Lista eshte bosh. Ske cfare heq!");
        return NULL;
    }
    koka = koka->pas;
    return koka;
}

struct nyje *hiqFund(struct nyje *koka)
{
    if (koka == NULL)
    {
        printf("Lista eshte bosh. Ske cfare heq!");
        return NULL;
    }

    if (koka->pas == NULL)
        return NULL;

    struct nyje *tmp = koka;

    while (tmp->pas->pas != NULL)
        tmp = tmp->pas;

    tmp->pas = NULL;
    return koka;
}

struct nyje *hiqPozicion(struct nyje *koka, int poz)
{
    if (koka == NULL)
    {
        printf("Asnje element nuk mund te hiqet. Lista eshte bosh!");
        return NULL;
    }

    if (poz == 1)
    {
        koka = koka->pas;
        return koka;
    }

    struct nyje *tmp = koka;

    int i = 1;

    while (i <= poz - 2 && tmp->pas != NULL)
    {
        tmp = tmp->pas;
        i++;
    }

    if (tmp->pas == NULL)
    {
        printf("Pozicioni nuk eshte i sakte.\n");
        return koka;
    }

    tmp->pas = tmp->pas->pas;

    return koka;
}

struct nyje *shtoPozicion(struct nyje *koka, int poz, int vlera)
{
    struct nyje *eliri = krijoNyje(vlera);

    if (poz == 1)
    {
        eliri->pas = koka;
        koka = eliri;
        return koka;
    }

    struct nyje *tmp = koka;

    int i = 1;
    while (i <= poz - 2 && tmp->pas != NULL)
    {
        tmp = tmp->pas;
        i++;
    }

    if (tmp->pas == NULL && i != poz - 1)
    {
        printf("Pozicioni nuk eshte i sakte.\n");
        return koka;
    }

    eliri->pas = tmp->pas;
    tmp->pas = eliri;
}

/* bool gjendetNeListe(struct nyje *koka, int vlere)
{
    struct *nyje tmp = koka;

    while (tmp != NULL)
    {
        if (tmp->vl == vlere)
        {
            return true;
        }
        tmp = tmp->pas;
    }
    return false;
}*/

int listCount(struct nyje *koka)
{
    struct nyje *tmp = koka;
    int c;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->pas;
    }
    return c;
}

struct nyje *futFillim(struct nyje *koka, int vlera)
{
    struct nyje *eliri;
    eliri = krijoNyje(vlera);
    eliri->pas = koka;
    koka = eliri;
    return koka;
}

struct nyje *futFund(struct nyje *koka, int vlera)
{
    struct nyje *eliri;
    eliri = krijoNyje(vlera);

    if (koka == NULL)
        return eliri;

    struct nyje *tmp = koka;
    while (tmp->pas != NULL)
        tmp = tmp->pas;

    tmp->pas = eliri;
    return koka;
}

struct nyje *krijoList(struct nyje *koka, int nr, int renditje)
{
    int i = 0;
    if (renditje == 0)
        for (i = 0; i < nr; i++)
            koka = futFillim(koka, i);
    else
        for (i = 0; i < nr; i++)
            koka = futFund(koka, i);
    return koka;
}

void afishoList(struct nyje *koka)
{
    struct nyje *tmp = koka;

    while (tmp != NULL)
    {
        printf("%d ", tmp->vl);
        tmp = tmp->pas;
    }
}

struct nyje *alterno(struct nyje *L1, struct nyje *L2)
{
    struct nyje *tmp1 = L1, *tmp2 = L2, *traktori1, *traktori2;

    while (tmp1->pas != NULL && tmp2 != NULL)
    {
        traktori1 = tmp1->pas;
        traktori2 = tmp2->pas;
        tmp1->pas = tmp2;
        tmp2->pas = traktori1;
        tmp1 = traktori1;
        tmp2 = traktori2;
    }
    if (tmp2 != NULL)
        tmp1->pas = tmp2;

    return L1;
}

void rendit(struct nyje *koka)
{
    struct nyje *i = koka;
    int tmp;
    while (i != NULL)
    {
        struct nyje *j = i->pas;
        while (j != NULL)
        {
            if (i->vl > j->vl)
            {
                tmp = i->vl;
                i->vl = j->vl;
                j->vl = tmp;
            }
            j = j->pas;
        }
        i = i->pas;
    }
}

int cift_n(struct nyje *L, int n)
{
    struct nyje *tmp = L;
    int c = 0;
    if (tmp == NULL)
        return 0;

    while (tmp != NULL)
    {
        if (tmp->vl % 2 == 0 && tmp->vl > n)
            c++;
        tmp = tmp->pas;
    }
    return c;
}

void hiqVlere(struct nyje *koka, int x, int y)
{
    struct nyje *tmp = koka, *temp;

    if (tmp == NULL)
        return;

    while (tmp->vl > x && tmp->vl < y)
    {
        temp = tmp->pas;
        free(tmp);
        tmp = temp;
    }

    while (tmp->pas != NULL)
    {
        if (tmp->pas->vl > x && tmp->pas->vl < y)
            tmp->pas = tmp->pas->pas;
        else
            tmp = tmp->pas;
    }
}

struct nyje *bashkolist(struct nyje *L1, struct nyje *L2)
{
    struct nyje *tmp1 = L1, *tmp2 = L2;
    while (tmp1->pas != NULL)
        tmp1 = tmp1->pas;

    tmp1->pas = tmp2;

    return L1;
}

int main()
{

    struct nyje *koka = NULL, *koka1 = NULL;
    koka = krijoList(koka, 5, 0);
    koka1 = krijoList(koka1, 5, 0);

    struct nyje *tmp;

    // int s = 0, nr = 0, nr_neg = 0;

    // while (tmp != NULL)
    // {
    //     s += tmp->vl;

    //     nr++;

    //     if (tmp->vl < 0)
    //         nr_neg++;

    //     tmp = tmp->pas;
    // }

    printf("\n");
    afishoList(koka);

    printf("\n");
    afishoList(koka1);

    printf("\n\n");

    struct nyje *koka2;

    koka2 = bashkolist(koka, koka1);

    // hiqVlere(koka, -1, 15);
    afishoList(koka2);
    // afishoList(koka1);
    // printf("\n\n");
    // printf("%d\n", cift_n(koka, 2));

    // tmp = alterno(koka, koka1);
    // afishoList(tmp);

    // rendit(koka);
    // afishoList(koka);

    // printf("Shuma %d\n", s);
    // printf("Numri elementeve %d\n", nr);
    // printf("Numri elementeve negative %d\n", nr_neg);

    return 0;
}
