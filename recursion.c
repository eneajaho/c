#include <stdio.h>
#include <stdlib.h>

// (m+m+m+m+m)
//     n
// shumezon m, n-here
int makeM(int m, int n)
{
    if (n == 1)
        return m;
    return m + makeM(m, n - 1);
}

//faktoriali
unsigned long faktorial(int n)
{
    if (n == 1)
        return 1;
    return n * faktorial(n - 1);
}

// te gjendet shuma e vektorit t[n]
int arraySum(int T[], int n)
{
    if (n == 1)
        return T[0];
    return T[n - 1] + arraySum(T, n - 1);
}

// afisho vektorin mbrapsht
void Backwards(int T[], int n)
{
    if (n == 1)
    {
        printf("%d ", T[0]);
        return;
    }
    printf("%d ", T[n - 1]);
    Backwards(T, n - 1);
    // per ta afishur vektorin normalisht
    // thjesht nderrohen vendet e dy funks te fundit
}

// Write a recursive function that computes the
// sum of all numbers from 1 to n,
// where n is given as parameter.

int sum(int n)
{
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

// kthen shumen e numrave cift nga 0 ne n
int sumN(int n)
{
    if (n == 0)
        return 0;
    return (n % 2 == 0 ? n : 0) + sumN(n - 1);
}

/*
Write a recursive function that finds and returns the minimum 
element in an array, where the array and its size are given as 
parameters.
*/
int findmin(int a[], int n)
{
    if (n == 1)
        return a[0];

    int b = findmin(a, n - 1);

    if (a[n - 1] < b)
        return a[n - 1];
    return b;
}

// a function that counts the bits of a given integer
int intCount(int n)
{
    if (n < 10)
        return 1;

    return 1 + intCount(n / 10);
}

int main()
{
    int a[4] = {1, 2, 3, 4};
    // afishoKombinim(a, 4, 4);
    // printf("%d", makeM(5, 5));
    // printf("%d", sumN(6));
    // printf("%d", faktorial(13));
    // printf("%d", arraySum(a, 4));
    // printf("%d", sum(3));
    // printf("%d", findmin(a, 4));
    // printf("%d", findsum(a, 4));
    // printf("%d", intCount(61533450));

    return 0;
}
