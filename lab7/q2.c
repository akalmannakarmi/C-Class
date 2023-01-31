// Write a program to display largest and smallest element of an array defined in Q.No. 1.

#include <stdio.h>
int main(){
    unsigned short int numsLen = 10;
    float nums[numsLen];
    for (int i = 0; i < numsLen; i++){
        printf("Enter %d Number: ",i+1);
        scanf("%f",&nums[i]);
    }
    unsigned short int smallIndex=0,largeIndex = 0;
    for (int i = 0; i < numsLen; i++){
        if (nums[smallIndex] > nums[i]){
            smallIndex = i;
        }
        if (nums[largeIndex] < nums[i]){
            largeIndex = i;
        }
    }
    printf("Largest:%.2f \nSmallest:%.2f",nums[largeIndex],nums[smallIndex]);
    return 0;
}