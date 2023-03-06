// Write a program to multiply two 3*3 matrices.

#include <stdio.h>
int main(){
    int a[3][3],b[3][3],m[3][3],t;
    printf("Enter First Matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d,%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second Matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d,%d: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            t = 0;
            for(int k=0;k<3;k++){
                t+=a[i][k]*b[k][j];
            }
            m[i][j] = t;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
