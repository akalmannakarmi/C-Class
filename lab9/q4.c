// Write a program to create a user defined function to calculate & display sum & average
// of two integer numbers entered by user.

#include <stdio.h>

void sumNave(int a,int b){
    printf("Sum: %d\n",a+b);
    printf("Average: %d\n",(a+b)/2);
}

int main(){
    int x,y;
    printf("Enter two num: ");
    scanf("%d %d",&x,&y);
    sumNave(x,y);
    return 0;
}