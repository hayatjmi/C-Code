#include<iostream>
using namespace std;
int main()
{
    long size;
    long flag=0;
    cin>>size;
    long arr[size];
    long brr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
      for(int i=0;i<size;i++)
    {
        for(int j=arr[i];j>=0;)
        {
           int rem =   (arr[i]%10);
           if((arr[i]%rem )==0)
           {
            flag++;
            brr[i]=flag;
           }
           arr[i]=(arr[i]/10);
        }
        cout<<flag;
        flag=0;
    }
    for(int i=0;i<size;i++)
    {
       cout<<brr[i];
    }

}