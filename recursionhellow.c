#include<stdio.h>
#include<stdlib.h>
void hellow(int);
int count =5;
int main()
{
   
    hellow(count);

}
void hellow(int count)
{   
    if(count==0)
    {
        return ;
    }
    
    printf("\nhello world");
    

    hellow(count-1);
    
}