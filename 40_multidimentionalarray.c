#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0]=65;
    marks[0][1]=95;
    marks[0][2]=69;
    marks[1][0]=75;
    marks[1][1]=85;
    marks[1][2]=68;
    for(int i=0;i<=2;i++)
    {
        for (int j=0;j<=2;j++)
        {
            printf("%d ",marks[i][j]);
        }
    }

}