// WAP to create a fucntion with no parameters and retun value for calculating two numbers entered by user

#include <stdio.h>
int sum();

int main(){
    printf("Sum : %d",sum());
    return 0;
}

int sum(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}