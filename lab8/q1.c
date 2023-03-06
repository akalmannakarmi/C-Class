// Write a program to read two matrices of order 3 * 2, add them and display the resultant
// matrix in matrix form.

#include <stdio.h>
int main(){
    int a[3][2]={0},t;
    for(int c=0;c<2;c++){
        printf("Enter Matrix %d\n",c);
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                printf("Enter %d,%d: ",i,j);
                scanf("%d",&t);
                a[i][j]+=t;
            }
        }
    }
    printf("Result:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}