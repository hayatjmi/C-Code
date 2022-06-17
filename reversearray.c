 #include<stdio.h>
 void printNumbers(int *arr,int n);
 void reversearray(int arr[],int n);
 int main()
 {
     int arr[]={0,1,2,3,4,5,6,7,8,9};
     reversearray(arr,10);

     printNumbers(arr,10);

 }
 void printNumbers(int *arr,int n)
 {
     for (int i =0 ;i<n;i++)
     {
         printf("%d \t",arr[i]);
     }
     
 }
 void reversearray(int arr[],int n)
 {
     for(int i=0;i<n/2;i++)
     {
         int firstvalue= arr[i];
         int secondvalue=arr[n-i-1];
         arr[i]=secondvalue;
         arr[n-i-1]=firstvalue;
     }
 }