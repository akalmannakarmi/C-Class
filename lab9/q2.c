// Write a program to read a string
// and check for palindrome without using string related function (a string is palindrome
// if its half is mirror by itself eg: abcdcba).

#include <stdio.h>
#include <string.h>

int main(){
    char str1[1024];
    int len=0,flag=0;
    printf("Enter string: ");
    gets(str1);
    for(int i=0;str1[i]!='\0';i++){
        len++;
    }
    for(int i=0;i<len/2;i++){
        if(str1[i]!=str1[len-i-1]){
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("%s is a palindrome",str1);
    }else{
        printf("%s is not palindrome",str1);
    }
    return 0;
}