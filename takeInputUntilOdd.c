#include<stdio.h>
int main()
{
    // keep taking input from user until user enters an odd number:
  /*  int num;
   do{
       if(num%2==0){
       printf("Enter Input");
       scanf("%d",&num);}
       else{
           printf("odd");
           break;
       }
   }while(1);*/
//     keep taking the input from user until user enters a number which is multiple of 7:
    int num;
    while(1)
    {
        if (num%7!=0)
        {
            printf("Enter input");
            scanf("%d",&num);
        }else{
            printf("multiple of 7 : ");
            break;
        }
    }
}