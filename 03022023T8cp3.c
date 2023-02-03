// 3.	Write C program to demonstrate example of nested structure.
// name hayat khan 
// mca ist year
#include<stdio.h>
#include<string.h>
struct organisation
{
     char organisation_name[20];
     char organisation_num[20];

     struct employee
     {
        char employee_name[20];
        char employee_id[10];
       long employee_num;
     }emp;
  
     
     
}org;
int main()
{
   strcpy(org.organisation_name,"Kiet");
   strcpy(org.organisation_num,"d5d5g5e8");
   strcpy(org.emp.employee_name,"Hayat");
   strcpy(org.emp.employee_id,"2224mca1141");
   org.emp.employee_num=880045613;
   printf("\n%s",org.organisation_name);
   printf("\n%s",org.organisation_num);
   printf("\n%s",org.emp.employee_name);
   printf("\n%s",org.emp.employee_id);
   printf("\n%ld",org.emp.employee_num);

}