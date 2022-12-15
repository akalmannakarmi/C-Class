// 6. WAP to swap two numbers using temporary variable.
#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c = a;
    a = b;
    b = c;
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0;
}