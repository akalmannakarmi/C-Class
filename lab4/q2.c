// 2) WAP to check whether an input number is positive or negative
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf(" %d",&a);
    if (a>0){
        printf("Positive number");
    }else{
        printf("Negative number");
    }
    return 0;
}