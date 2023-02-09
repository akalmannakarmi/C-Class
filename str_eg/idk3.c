// WAP to ilustrate the use of strcmp()

#include <stdio.h>
#include <string.h>
int main(){
    char name1[15],name2[15];
    printf("Enter First String :");
    gets(name1);
    printf("Enter Second String :");
    gets(name2);
    int diff = strcmp(name1,name2);
    if (diff>0)
        printf("%s is greater than %s by value %d ",name1,name2,diff);
    else if (diff<0)
        printf("%s is smaller than %s by value %d ",name2,name1,diff);
    else
        printf("%s and %s are equal",name1,name2);
    return 0;
}
