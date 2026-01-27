#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Dividend:\n");
    scanf("%d",&a);
    printf("Enter Divisor:\n");
    scanf("%d",&b);
    int r = a%b ;
    printf("The remainder when %d is divided by %d is %d",a,b,r);
    return 0;
}