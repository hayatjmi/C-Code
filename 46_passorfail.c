#include<stdio.h>
int main()
{
    /* criteria 
    marks >30 <100 pass
    marks <30 fail
    */
   int marks;
   printf("Enter the marks");
   scanf("%d",&marks);
   if (marks>=30 && marks<=100)
   {
       printf("Pass");

   }
   else if( marks>=0 && marks<=29){
       printf("Fail ");
   }
   else{
       printf("Wrong Input :");// we can also do it using it using ternary operatior or using conditional operator
   }
   
}