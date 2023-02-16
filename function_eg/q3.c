// WAP to create a fucntion with parameters and no retun value for calculating two numbers entered by user

#include <stdio.h>
void sum(int x,int y);

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}

void sum(int x,int y){
    printf("Sum : %d",x+y);
}