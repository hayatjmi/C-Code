#include<stdio.h>
 struct address
{
    int houseno;
    int block;
    char city[100];
    char state[100];
};

int main()

{
    struct address adds[5];
    printf("Enter data for first person :");
    scanf("%d",&adds[0].houseno);
    scanf("%d",&adds[0].block);
    scanf("%s",&adds[0].city);
    scanf("%s",&adds[0].state);
    printf("%d\n%d\n%s\n%s",adds[0]);
    

    
}

