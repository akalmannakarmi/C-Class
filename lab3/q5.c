// 5. WAP to take your name & age using unformatted I/O and display it.
#include <stdio.h>
int main(){
    char name[10] ;
    char age[3];
    printf("Enter Name: ");
    gets(name);
    printf("Enter Age: ");
    gets(age);
    printf("Name: %s\nAge: %s\n",name,age);
    return 0;
}