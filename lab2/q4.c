// 4. Write a C program to compute the sum, difference, product & division for two given input numbers
#include <stdio.h>
int main(){
    float a,b;
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    printf("Sum: %f\n",a+b);
    printf("Difference: %f\n",a-b);
    printf("Product: %f\n",a*b);
    printf("Division: %f\n",a/b);
    return 0;
}
