// WAP to calculate the factorial of any number using recursive function
#include <stdio.h>
int factorial(int n);

int main(){
   int num;
   printf("Enter a num: ");
   scanf("%d",&num);
   printf("Factorial: %d",factorial(num));
   return 0; 
}

int factorial(int n){
    if (n==0)
        return 1;
    return n*factorial(n-1);
}