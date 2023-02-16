// WAP to create a funtion to calculate simple interest

#include <stdio.h>

float SI(int p,int t,int r);

int main(){
    int p,t,r;
    printf("Enter princepal:");
    scanf("%d",&p);
    printf("Enter Time:");
    scanf("%d",&t);
    printf("Enter Rate:");
    scanf("%d",&r);
    printf("Simple Interest: %.2f",SI(p,t,r));
    return 0;
}

float SI(int p,int t,int r){
    return (p*t*r)/100;
}