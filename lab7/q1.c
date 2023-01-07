// Write a program to enter 10 floating numbers in an array and display it.

#include <stdio.h>
int main(){
    signed short int numsLen = 10;
    float nums[numsLen];
    for (int i = 0; i < numsLen; i++){
        printf("Enter %d Number: ",i+1);
        scanf("%f",&nums[i]);
    }
    printf("The numbers are: ");
    for (int i = 0; i < numsLen; i++){
        printf("%.2f\t",nums[i]);
    }
    return 0;
}