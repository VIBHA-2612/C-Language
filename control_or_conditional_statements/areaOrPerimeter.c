#include<stdio.h>
int main(){
    int length;
    printf("Enter the length:\n");
    scanf("%d",&length);
    int breadth;
    printf("Enter the breadth:\n");
    scanf("%d",&breadth);
    int area = length * breadth;
    int perimeter = 2 * (length+breadth);
    if(area==perimeter)
    printf("Both are equal. ");
    else if (area>perimeter)
    printf("Area of rectangle is less is more than perimeter");
    else
    printf("Perimeter of rectangle is more than area");
    return 0;
}