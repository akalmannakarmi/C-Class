// WAP to illustrate the use of strrev function

#include <stdio.h>
#include <string.h>
int main(){
    char str1[15];
    printf("Enter String :");
    gets(str1);
    strrev(str1);
    printf("%s",str1);
    return 0;
}
