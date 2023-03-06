// WAP to bubble sort array the user enters

#include <stdio.h>
int main(){
    int a_len;
    printf("Enter length: ");
    scanf("%d",&a_len);
    printf("Enter array");
    int a[a_len],temp;
    for(int i=0;i<a_len;i++){
        printf("Enter num: ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<a_len;i++){
        for(int j=0;j<j-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<a_len;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}