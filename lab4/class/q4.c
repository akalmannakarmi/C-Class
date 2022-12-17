// 4) WAP to take two numbers and print largest among them.

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter First number: ");
    scanf(" %d",&a);
    printf("Enter Second number: ");
    scanf(" %d",&b);
    if (a>b){
        printf("%d is greater",a);
    }else{
        printf("%d is greater",b);
    }
    return 0;
}