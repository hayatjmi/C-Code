#include<iostream>
using namespace std;
int main()
{
    
long arrsize, num ;
cin>>arrsize;
cin>>num;
long arr[arrsize];
int flag=0;
for(int i=0;i<arrsize;i++)
{
cin>>arr[i];
}
for(int i=0;i<arrsize;i++)
{
    for(int j=1;j<arrsize;j++)
    {
        if(i<j)
        {
          if((arr[i]+arr[j])%num == 0)    
          {
            flag++;
          }       
        }
    }
}
cout<<flag;
}