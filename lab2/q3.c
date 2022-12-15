// 3. Write a C program to print the current system date.
#include <stdio.h>
#include <time.h>
int main(){
    time_t cTime;
    time(&cTime);
    printf("Current Time:%s",ctime(&cTime));
    return 0;
}