// WAP to illustrate the use of strstr function

#include <stdio.h>
#include <string.h>
int main(){
    char str1[30]="BCA OJASHWI";
    char str2[15]="BCA";
    if (strstr(str1,str2)==NULL){
        printf("Sub string is not found");
    }else{
        printf("Sub string is found");
    }
    return 0;
}
