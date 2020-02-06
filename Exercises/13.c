
int s, x, T[m][n];

for (i = 0; i < m; i++)
    for (j = 0; j < m; j++)
        scanf("%d", &T[i][j]);

for (i = 0; i < n; i++)
    if (T[i][i] == x)
        s++;
return s;

// te gjendet shuma e elementeve ne diagonalen dytesore ne funksion. Matrica T[m][n]

for (i = 0; i < n; i++)
    for (j = n; j = < n; j--)
        if (i + j == n)
            s += T[i][j];

//	ose

int shumadd(int T[][n], int n)
{
    int i, shumadd = 0;
    for (i = 0; i < n; i++)
        shumadd += T[i][n - i - 1];
    return shumadd;
}

// krijo nje funksion qe gjen shumen e elementeve pozitiv nen  diagonalen kryesore

// 3 3 3 3
// 2 5 9 8
// 4 5 6 2
// 1 2 3 4

/* 
	
	t[1][0]
	t[2][0]
	t[2][1]
	t[3][0]
	t[3][1]
	t[3][2]
	
	*/
//
int shumaaa(int T[][n], int n)
{
    int shumaaa = 0, j, i, c = 0;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                break;
            else if (T[i][j] > 0)
            {
                shumaaa += T[i][j];
                c++;
            }
        }
    }
    return shumaaa * 1.0 / c * 1.0;
}

// te krijohet nje funks qe kthen true nese shuma e elementeve mbi diagonale eshte e barabarte me shumen e elementeve nen diagonale

int trueosefalse(int T[][n], int n)
{
    int j, i, c = 0, shuma1 = 0;
    shuma2 = 0;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                break;
            else if (T[i][j] > 0)
                shuma1 += T[i][j];
        }
    }

    for (i = 1; i < n; i++)
    {
        for (j = n; j > 0; j--)
        {
            if (i == j)
                break;
            else if (T[i][j] > 0)
                shuma2 += T[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
                shuma1 += T[i][j];
            if (i < j)
                shuma2 += T[i][j];
        }
    }
}

if (shuma1 == shuma2)
    return true;
else
    return false;
}