

int i, j, tmp, T[11] = {1, 3, 5, 7, 6, 4, 2, 8, 9, 10, 11};

// elementet tek ne pozicione tek, dhe elementet cift ne pozicione cift

// Ciklon elementet
for (i = 1; i <= 10; i++)
{
    //shikon nese pozicioni eshte cift
    if (i % 2 == 0)
    {
        // shikon nese elementi nuk eshte cift
        if (T[i] % 2 != 0)
        {
            // nese elementi nuk eshte cift atehere ciklon elementet dhe gjen nje element tjeter qe eshte cift ne pozicion tek
            for (j = i + 1; j <= 10; j++)
            {
                // shikon nese pozicioni eshte tek
                if (j % 2 == 1)
                {
                    // shikon nese elementi eshte cift
                    if (T[j] % 2 == 0)
                    {
                        // shkemben vlerat
                        tmp = T[i];
                        T[i] = T[j];
                        T[j] = tmp;
                    }
                }
            }
        }
    }

    // shikon nese pozicioni eshte tek
    if (i % 2 == 1)
    {
        // shikon nese elementi eshte cift
        if (T[i] % 2 == 0)
        {
            // ciklon elementet per te gjetur nje element tek ne pozicion cift
            for (j = i + 1; j <= 10; j++)
            {
                // shikon nese pozicioni eshte cift
                if (j % 2 == 0)
                {
                    // shikon nese elementi eshte tek
                    if (T[j] % 2 == 1)
                    {
                        // shkemben vlerat
                        tmp = T[i];
                        T[i] = T[j];
                        T[j] = tmp;
                    }
                }
            }
        }
    }
}

for (i = 1; i <= 10; i++)
{
    // afishon indeksin dhe vektorin e ri..
    printf("%d: %d\n", i, T[i]);
}

int i, j, A[10] = {1};
int T[10] = {1, 1, 1, 1, 2, 2, 3, 0, 0, 0};

// printon tabelen
for (i = 0; i < 10; i++)
{
    printf("%d   ", T[i]);
}

printf("\n");

// ciklon tabelen
for (i = 0; i < 10; i++)
{
    // ciklon elementet nja nga nje
    for (j = 1; j < 10; j++)
    {
        // kontrollon sa here elementi T[i] ndodhet ne tabele
        if (T[i] == T[j])
        {
            // rritim counterin qe e kemi te ruajtur ne vektor
            A[i] = A[i] + 1;
        }
    }
}

//afishon sa here permenden elementet
//	for(i=0; i<10; i++){
//		printf("Elementi: %d ndodhet %d here ne tabele \n", T[i], A[i]);
//	}

// gjen elementin me dendurine me te vogel
int k, den = A[0];
for (i = 0; i < 10; i++)
{
    if (A[i] < den)
    {
        den = A[i];
        k = i;
    }
}
printf("Elementi me dendurine me te vogel eshte: %d, dhe eshte permendur %d here.", T[k], den);

int n, m, x, c, i, j;

printf("Row number: ");
scanf("%d", &n);
printf("Col number: ");
scanf("%d", &m);

int T[n][m];

for (i = 0; i < n; i++)
{
    printf("Row %d \n", i + 1);
    for (j = 0; j < m; j++)
    {
        printf("Element %d: ", j);
        scanf("%d", &T[i][j]);
    }
}

for (i = 0; i < n; i++)
{
    for (j = 0; j < m; j++)
    {
        printf("%d ", T[i][j]);
    }
    printf("\n");
}
getch();
return 0;
