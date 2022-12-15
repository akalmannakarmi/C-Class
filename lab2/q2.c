// 2. Write a C program that reads the values of distance travelled by a car and the time taken for the same.
//    Next,compute the speed at which the car travelled.
#include <stdio.h>
int main(){
    float distance,time;
    scanf("%f",&distance);
    scanf("%f",&time);
    printf("Speed:%f",distance/time);
    return 0;
}
