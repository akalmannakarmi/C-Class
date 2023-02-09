// WAP to concatinate your first name and last name
# include <stdio.h>
# include <string.h>
int main(){
    char fname[255],lname[255];
    printf("Enter your First Name: ");
    gets(fname);
    printf("Enter your Last Name: ");
    gets(lname);
    strcat(fname," ");
    strcat(fname,lname);
    printf("%s",fname);
    return 0;
}