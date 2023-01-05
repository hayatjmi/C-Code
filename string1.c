#include<stdio.h>
#include<string.h>
int main()
{
    char Name[5][20],temp[20];
    int i,pass;
    printf("Enter 10 students name : \n");
    for(i=0;i<5;i++)
    {
        scanf("%s",&Name[i]);
    }
    for(pass=1;pass<5;pass++)
    {
        for(i=0;i<5-pass;i++)
        {
            if(strcmp(Name[i],Name[i+1])>0)
            {
                strcpy(temp,Name[i+1]);
                strcpy(Name[i+1],Name[i]);
                strcpy(Name[i],temp);

            }
        }
    }
    printf("Entered students name  are: \n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",Name[i]);
    }
}