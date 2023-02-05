// 6.	Write C program to demonstrate example of array of structures.
// Name Hayat khan
// mca ist year
#include<stdio.h>
struct student
{
    char name[10];
    int roll_no;
};
int main()
{
    struct student s[5];
   for(int i=0;i<5;i++)
   {
    printf("Enter the Name of the student ");
    scanf("%s",&s[i].name);
    printf("Enter the roll no. of the student ");
    scanf("%d",&s[i].roll_no);
   }

   printf("Students Information : ");
   for(int i=0;i<5;i++)
   {
    printf("\n %s %d ",s[i].name, s[i].roll_no);
   }
    

}