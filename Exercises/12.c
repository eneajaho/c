

for (i = 0; i < n; i++)
{
    c = 0;
    for (j = 0; j < m; j++)
    {
        if (T[i][j] == x)
            c++;
    }

    printf("Ne rreshtin %d, numri %d eshte permendur %d here \n", i + 1, x, c);
}

printf("\n------------------------\n");

for (j = 0; j < m; j++)
{
    c = 0;
    for (i = 0; i < n; i++)
    {
        if (T[i][j] == x)
            c++;
    }

    printf("Ne kolonen %d, numri %d eshte permendur %d here \n", j + 1, x, c);
}
