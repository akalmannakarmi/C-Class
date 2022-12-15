// 5. Area of triangle is given bye the formula A=√𝑠(𝑠 − 𝑎)(𝑠 − 𝑏)(𝑠 − 𝑐) where a, b & c are sides of triangle and
//    2s=a+b+c. write a program to compute the area of triangle for the given values of a, b & c.
#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    printf("Enter Sides:");
    scanf("%lf%lf%lf",&a,&b,&c);
    double s = (a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %.2lf",area);
    return 0;
}