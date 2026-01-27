#include<stdio.h>
int main(){
    int cp;
    printf("Enter cost price:\n");
    scanf("%d",&cp);
    int sp;
    printf("Enter selling price:\n");
    scanf("%d",&sp);
    if(sp>cp)
    printf("Profit");
    else if(sp==cp)
    printf("Nor Profit nor Loss");
    else
    printf("Loss");
    return 0;
}