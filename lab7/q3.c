// Write a program to initialize one dimensional integer array of size 8 and display the sum and average of array elements

#include <stdio.h>
int main(){
    unsigned short int numsLen = 8;
    int nums[numsLen];
    for (int i = 0; i < numsLen; i++){
        printf("Enter %d Number: ",i+1);
        scanf("%d",&nums[i]);
    }
    float average = 0;
    for (int i = 0; i < numsLen; i++){
        average += nums[i];
    }
    printf("Sum:%.2f\t",average);
    average /= numsLen;
    printf("Average:%.2f",average);
    return 0;
}