#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("twonum.txt","r");


    int a;
    fscanf(fptr,"%d",&a);

    int b;
    fscanf(fptr,"%d",&b);

    fclose(fptr);
    fptr=fopen("twonum.txt","w");
     
     fprintf(fptr,"%d\t",a + b);
     fclose(fptr);
     return 0;
}