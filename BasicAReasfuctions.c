#include<stdio.h>
#include<stdio.h>// successfully compiled:
void circle(int );
void rectangle(int  , int );
void square(int );
int main()
{
    int r;
    int l ,b;
    int side;
    circle(r);
    rectangle(l,b);
    square(side);

}
void circle(int r)
{
    printf("Enter the radius of the cirle");
    scanf("%d",&r);
    float area = 3.14*r*r;
    printf("\nArea of circle is : %f ",area);
}
void rectangle(int l,int b)
{
    printf("\nEnter the length and breadth of the rectangle : ");
    scanf("%d%d",&l ,&b);
    int area = l*b;
    printf("\narea of rectangle is : %d",area);
}
void square(int side)
{
    printf("\nEnter the side of the square :");
    scanf("%d",&side);
    int area = side * side;
    printf("\narea of square is %d : ", area);
}