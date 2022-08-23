#include<stdio.h>
int main()
{
    FILE *fptr;
    int num;
    fptr=fopen("oddnum.txt","w");
    printf("Enter the nth number : \n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
}