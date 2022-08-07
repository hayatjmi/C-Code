#include<stdio.h>
int main()
{
    FILE *fptr;
    char name[100];
    int age;
    float cgpa;
    fptr=fopen("student.txt","w");
    printf("Enter your name");
    scanf("%s",name);
    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter your cgpa");
    scanf("%f",&cgpa);
    fprintf(fptr,"%s \t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f\t",cgpa);
    fclose(fptr);
    return 0;

}