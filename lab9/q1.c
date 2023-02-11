// Write a program to read a string
// and check for palindrome using string related function (a string is palindrome
// if its half is mirror by itself eg: abcdcba).

#include <stdio.h>
#include <string.h>

int main(){
    char str1[1024],str2[1024];
    printf("Enter string: ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if (strcmp(str1,str2)==0){
        printf("%s is a palindrome",str1);
    }else{
        printf("%s is not palindrome",str1);
    }
    return 0;
}