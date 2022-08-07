#include <stdio.h>
struct complex
{ 
    int real;
    int img;
};

int main()
{
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    printf("the real complex number is : %d \n ",ptr->real);
    printf("the imaginary complex number is : %d \n ",ptr->img);
}