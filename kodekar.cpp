#include<iostream>
using namespace std;
int main()
{
    int sub,rem;
    cin>>sub;
    int subarr[sub];
    for(int i=1;i<=sub;i++)
    {
        cin>>subarr[i];
    }
    for(int i=1;i<=sub;i++)
    {
        if(subarr[i]<38)
        {
            printf("%d\n",subarr[i]);
        }
        else if(subarr[i]>=38)
        {
            rem=subarr[i]%5;
            if(rem>=3)
            {
                int rem1=5-rem;
                subarr[i]=subarr[i]+rem1;
                printf("%d\n",subarr[i]);
            }
            else if(rem<3)
            {
               printf("%d\n",subarr[i]); 
            }
        }
            
    }
    
}