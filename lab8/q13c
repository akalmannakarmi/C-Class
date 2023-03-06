// WAP to multipy two matrix of users desire

#include <stdio.h>

int main(){
    int aRow,aCol,bRow,bCol,t;
    printf("Order of Matrix1:");
    scanf("%d,%d",&aRow,&aCol);
    printf("Order of Matrix2:");
    scanf("%d,%d",&bRow,&bCol);
    if(aCol!=bRow){
        printf("Cant multiply");
        return -1;
    }
    int a[aRow][aCol],b[bRow][bCol],m[aRow][bCol];

    printf("Enter First Matrix\n");
    for(int i=0;i<aRow;i++){
        for(int j=0;j<aCol;j++){
            printf("Enter %d,%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second Matrix\n");
    for(int i=0;i<bRow;i++){
        for(int j=0;j<bCol;j++){
            printf("Enter %d,%d: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<aRow;i++){
        for(int j=0;j<bCol;j++){
            t = 0;
            for(int k=0;k<aCol;k++){
                t+=a[i][k]*b[k][j];
            }
            m[i][j] = t;
        }
    }
    for(int i=0;i<aRow;i++){
        for(int j=0;j<bCol;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
