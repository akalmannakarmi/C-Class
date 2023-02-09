#include <stdio.h>
#include <string.h>
int main(){
    char sname[]={'B','C','A','\0'};
    char dname[10];
    strcpy(dname,sname);
    printf("%s",&dname);
    return 0;
}