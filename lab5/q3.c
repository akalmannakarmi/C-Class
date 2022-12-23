// 3) WAP to display first 20 terms of Fibonacci series
// 0,1,1,2,3,5,8,...20th

#include <stdio.h>
int main(){
    int a=0,b=1,c;
    for (int i = 0; i < 20; i++){
        printf("%d\n",a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}