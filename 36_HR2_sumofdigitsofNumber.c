#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    printf("Enter a five digit number");
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum =0;
    int reminder;
    int quot;
    while(n)
    {
        reminder=n%10;
        n=n/10;
        sum=sum+reminder;
    }
    printf("%d",sum);
    
    
    return 0;
}