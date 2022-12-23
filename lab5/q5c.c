// 5.c) WAP to display
// 1
// 1   4
// 1   4   9
// 1   4   9   16
// 1   4   9   16  25

#include <stdio.h>
int main(){
    for (int i=1; i<=5; i++){
        for (int j=1; j<=i; j++){
            printf("%d\t",j*j);
        }
        printf("\n");
    }
    return 0;
}