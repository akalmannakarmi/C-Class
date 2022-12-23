// WAP to find GCD(greatest common divisor or HCF) and LCM(least common multiple) of two numbers.

#include <stdio.h>
int main(){
    int a,b,LCM=1,HCF=1;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for (int i=a;i>0;i--){
        if (a%i==0 && b%i==0){
            HCF = i;break;}
    }
    LCM = (a*b)/HCF;
    printf("HCF: %d\n",HCF);
    printf("LCM: %d\n",LCM);
    return 0;
}