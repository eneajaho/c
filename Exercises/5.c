
#include <stdio.h>

int zanoree(const int *str)
{
    int nr = 0; //nr numeron sasine e zanoreve qe ka i gjithe stringu
    while (*str != '\0')
    { //derisa karakteri eshte i ndryshem nga karakteri i fundit i stringut kontrollon zanoret qe ka
        //	 	if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'y'){
        //	 		nr++;
        //		 }
        printf("%d\n", str);

        str++;
        printf("%d\n", str);
        //kalon tek karakteri tjeter i stringut
    }
    return nr;
}

int main()
{
    //	int a[2]={1, 1};
    ////	scanf("%s", a);
    //
    //	printf("%d", zanoree(a));
    //
    int *a = 1;
    int i;

    for (i = 0; i < 100; i++)
    {
        printf("%d\n", a);
        a++;
    }

    getch();
    return 0;
}