#include <stdio.h>
int PC(int, int, int);
int main()
{
    int maths;
    int sci;
    int sanskrit;
    printf("\nEnter the marks of math , sci and sanskrit respectively: ");
    scanf("%d%d%d", &maths, &sci, &sanskrit);
    int percentage = PC(maths, sci, sanskrit);
    printf("%d%%", percentage);
}
int PC(int a, int b, int c)
{
    int sum = a + b + c;
    int percentage = sum / 3;
    return percentage;
}
