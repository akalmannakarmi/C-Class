// 3) WAP to check wheter an input number is positive or negative or zero
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf(" %d",&a);
    if (a>0){
        printf("Positive number");
    }else if(a<0){
        printf("Negative number");
    }else{
        printf("Zero number");
    }
    return 0;
}