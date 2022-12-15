#include <stdio.h>
#include <time.h>
#include <math.h>

void eqn(){
    // ax+by=c for given a=5,b=8 & c=18
    int a=5,b=8,c=18;
    printf("%dx+%dy=%d",a,b,c);
    return;
}

void calcSpeed(){
    float distance,time,speed;
    printf("Enter Distance travelled:");
    scanf("%f",&distance);
    printf("Enter Time Taken:");
    scanf("%f",&time);

    if (time == 0){
        printf("Time taken can not be 0. If you want the ans is infinity");
        return;
    }
    speed = distance/time;
    printf("Speed:%f",speed);
    return;
}

void currentTime(){
    time_t timeNow;
    time(&timeNow);
    printf("Current time %s",ctime(&timeNow));
    return;
}

void calc(){
    float a,b;
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Enter First Number:");
    scanf("%f",&b);
    printf("Sum : %f\n",a+b);
    printf("Diff : %f\n",a-b);
    printf("Mult : %f\n",a*b);
    printf("Divi : %f\n",a/b);
}

void areaTriangle(){
    double a,b,c;
    printf("Enter First Side:");
    scanf("%lf",&a);
    printf("Enter Second Side:");
    scanf("%lf",&b);
    printf("Enter Third Side:");
    scanf("%lf",&c);
    double s = (a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %.2lf",area);
    return;
}

void distance(){
    float x1,y1,x2,y2;
    printf("Enter x1,y1:");
    scanf("%f%f",&x1,&y1);
    printf("Enter x2,y2:");
    scanf("%f%f",&x2,&y2);
    float d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance %f",d);
    return;
}

int main(){
    printf("Hello World\n");
    // eqn();
    // calcSpeed();
    // currentTime();
    // calc();
    // areaTriangle();
    distance();
    return 0;
}