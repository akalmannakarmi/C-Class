// 5.d) WAP to display
// 1   6   10  13  15
// 2   7   11  14
// 3   8   12
// 4   9
// 5
#include <stdio.h>
int main(){
    for (int i = 1; i <= 5; i++){
        for (int j=5,v=0; j>=i; j--){
            printf("%d\t",v+i);
            v +=j;
        }
        printf("\n");
    }
    return 0;
}