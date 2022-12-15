// 1. Write a program to calculate the area, perimeter, diameter of circle taking radius as input.

#include <stdio.h>
#define pi 3.14159
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Area: %f\n",3.14159*r*r);
    printf("Circumference: %f\n",2*pi*r);
    printf("Diameter: %f\n",2*r);
    return 0;
}