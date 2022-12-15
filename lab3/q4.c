// 4. WAP to read a character in upper case & the print it in lower case.

#include <stdio.h>
int main(){
    char a;
    printf("Enter Uppercase character: ");
    scanf(" %c",&a);
    printf("Lower: %c\n",a+32);
    return 0;
}