#include<stdio.h>
#include<string.h>

struct  student//structure are stored in contigeous mermory
{
  int roll;
  float cgpa;
  char name[100];
};

int main()
{
    struct student s1;
    s1.cgpa=9.2;
    s1.roll=56130;
    strcpy(s1.name,"hayatkhan");
    printf("\nstudent name is: %s",s1.name);
    printf("\nstudent roll no  is : %d",s1.roll);
    printf("\nstudent name is : %f",s1.cgpa);
    

}