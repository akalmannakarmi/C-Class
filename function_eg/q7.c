// WAP to enter any 5 integer numbers and print the smallest one using an array passing it to a function 

#include <stdio.h>
int smallest(int n[]);
int main(){
    int nums[5];
    printf("Enter 5 nums: ");
    scanf("%d %d %d %d %d",&nums[0],&nums[1],&nums[2],&nums[3],&nums[4]);
    printf("Smallest: %d",smallest(nums));
    return 0;
}
int smallest(int n[]){
    int s = n[0];
    for(int i=0;i<5;i++){
        if(s>n[i]){
            s = n[i];
        }
    }
    return s;
}