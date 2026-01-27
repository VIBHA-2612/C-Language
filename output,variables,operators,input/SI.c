#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("Enter principal:\n");
    scanf("%f",&principal);
    printf("Enter rate:\n");
    scanf("%f",&rate);
    printf("Enter time:\n");
    scanf("%f",&time);
    si = (principal*rate*time) / 100;
    printf("Your simple interest is: %f",si);
    return 0;
}