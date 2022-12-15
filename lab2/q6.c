// 6. Distance between the two points (x1,y1) & (x2,y2) is governed by the formula D^2=(x2-x1)^2+(y2-y1)^2
//    Write a program to compute D for given coordinates of the points
#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,x2,y2;
    printf("Enter x1,y1:");
    scanf("%f%f",&x1,&y1);
    printf("Enter x2,y2:");
    scanf("%f%f",&x2,&y2);
    double d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance %lf",d);
    return 0;
}