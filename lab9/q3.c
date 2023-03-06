// Write a program read square matrix of size N×N & calculate the sum of diagonal elements
// of matrix.

#include <stdio.h>

int main(){
    int N,sum=0;
    printf("Enter N:");
    scanf("%d",&N);
    int a[N][N];
    printf("Enter Matrix:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("Enter %d,%d: ",i,j);
            scanf("%d",&a[i][j]);
            if(i==j){
                sum+=a[i][j];
            }
        }
    }
    printf("Sum: %d",sum);
    return 0;
}