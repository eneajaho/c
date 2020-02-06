
// nderto nje funksion t[m][n] permasen n dhe m..x te plote..sa elemente ne diagonalen kryesore jane te barabarte me x

int gjejmin(int a, int b, int c)
{
    int min = a;
    if (a > b)
        min = b;
    if (b > c)
        min = c;
    return min;
}

printf("%d", gjejmin(8, 6, 7));

int gjejmax(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main(int argc, char *argv[])
{

    int r;
    r = gjejmax(5, 4, 9);
    return r;
}