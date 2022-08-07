#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("%d",n);
    fscanf(fptr,"%d",&n);
    printf("%d",n);
    fscanf(fptr,"%d",&n);
    printf("%d",n);
    fscanf(fptr,"%d",&n);
    printf("%d",n);
    fscanf(fptr,"%d",&n);
    printf("%d",n);
    fclose(fptr);
    return 0;    
}