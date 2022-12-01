#include<iostream>
using namespace std;
int main()
{
    long arrsize;
    cin>>arrsize;
    long arr[arrsize];
    for(long i=0;i<arrsize;i++)
    {
        cin>>arr[i];
    }
    for(long i=1;i<arrsize;i++)
    {
        if(arr[0]<arr[i])
        {
            int temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
        }
    }
    int max=arr[0];
    int flag=0;
    for(long i=0;i<arrsize;i++)
    {
      if(max==arr[i])
      {
        flag++;
      }
    }
    cout<<flag<<endl;
}