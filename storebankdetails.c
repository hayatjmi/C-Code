#include<stdio.h>
typedef struct bankAccount{
    int accountnum;
    char accountname[50];
}Bacc; 
int main()
{
    Bacc acc1={1535,"Hayat khan"};
    Bacc acc2={1536,"Atif Ali"};
    Bacc acc3={1537,"Pranav Sharma"};
    printf("Welcome to the State Bank of India :\n ");
    printf("Bank account number is : %d \t  and Bank Account name is :%s\n",acc1.accountnum,acc1.accountname);
    printf("Bank account number is :%d \t and Bank Account name is : %s\n",acc2.accountnum,acc2.accountname);
    printf("Bank account number is :%d \t and Bank Account name is : %s\n",acc3.accountnum,acc3.accountname);

}