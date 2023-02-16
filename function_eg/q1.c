// WAP to create a fucntion with no parameters and no retun value for calculating two numbers entered by user

#include <stdio.h>
void sum();

int main(){
    sum();
    return 0;
}

void sum(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum : %d",a+b);
}