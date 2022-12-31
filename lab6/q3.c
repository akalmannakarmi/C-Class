// WAP to illustrate break an continue with suitable examples
// Program to find the first natural number which can not divide the given number
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for (int i = 1; i < a/2; i++){
        if (a%i ==0){
            printf("%d is divisible by %d\n",a,i);
            continue;
        }
        printf("%d is not divisible by %d\n",a,i);
        break;
    }
    return 0;
}