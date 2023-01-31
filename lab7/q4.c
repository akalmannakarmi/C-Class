//  Write a program to display the sum of even numbers & odd numbers of an array defined in Q.No. 3.


#include <stdio.h>
int main(){
    unsigned short int numsLen = 8;
    int nums[numsLen];
    for (int i = 0; i < numsLen; i++){
        printf("Enter %d Number: ",i+1);
        scanf("%d",&nums[i]);
    }
    int evenSum = 0 , oddSum=0;
    for (int i = 0; i < numsLen; i++){
        if (nums[i]%2==0){
            evenSum+=nums[i];
        }else{
            oddSum+=nums[i];
        }
    }
    printf("Even Sum:%d \nOdd Sum:%d",evenSum,oddSum);
    return 0;
}