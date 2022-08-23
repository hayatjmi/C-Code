#include <stdio.h>
int main()
{   // presidence or priority
    /*
    5*2-2*3 = 4
    5*2/2*3 = 15
    5*(2/2)*3 = 15
    5+2/2*3 = 8
    */
    int exprsn1 = 5 * 2 - 2 * 3;
    int exprsn2 = 5 * 2 / 2 * 3;
    int exprsn3 = 5 * (2 / 2) * 3;
    int exprsn4 = 5 + 2 / 2 * 3;
    printf("%d\n", exprsn1);
    printf("%d\n", exprsn2);
    printf("%d\n", exprsn3);
    printf("%d\n", exprsn4);
}