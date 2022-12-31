// WAP to convert binary to decimal number
#include <stdio.h>
#include <math.h>
int main(){
    int a,b=0,r=0;
    printf("Enter num in binary: ");
    scanf("%d",&a);
    for (int i = 0; a >0; i++){
        r = a%10;
        a = a/10;
        b += r*pow(2,i);
    }
    printf("decimal: %d",b);
    return 0;
}