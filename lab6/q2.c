// WAP to print prime number from 1 to N
#include <stdio.h>
int main(){
    int n,flag=0;
    printf("Enter N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        flag=0;
        if(i==1){
            flag=1;
        }
        for(int j=2;j<=i/2;j++){
            if (i%j==0){
                flag=1;
                break;
            }
        }
        if (flag==0){
            printf("%d\n",i);
        }
    }
    return 0;
}