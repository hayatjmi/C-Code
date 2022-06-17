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
     struct student s2;
    s2.cgpa=9.6;
    s2.roll=56180;
    strcpy(s2.name,"rohitkapoor");
    printf("\nstudent name is: %s",s2.name);
    printf("\nstudent roll no  is : %d",s2.roll);
    printf("\nstudent name is : %f",s2.cgpa);
     struct student s3;
    s3.cgpa=7.2;
    s3.roll=56170;
    strcpy(s3.name,"anamkhan");
    printf("\nstudent name is: %s",s3.name);
    printf("\nstudent roll no  is : %d",s3.roll);
    printf("\nstudent name is : %f",s3.cgpa);
    

}