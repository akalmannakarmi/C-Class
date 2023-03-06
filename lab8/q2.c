// Write a program to read a matrix, calculate transpose of it & display the result.

#include <stdio.h>
int main(){
    int a[3][2];
    printf("Enter Matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter %d,%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose:\n");
    for(int j=0;j<2;j++){
        for(int i=0;i<3;i++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}