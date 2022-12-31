// WAP to any integer number and print reverse of it
# include <stdio.h>
int main(){
    int a,r,b=0;
    printf("Enter any +ve integer: ");
    scanf("%d",&a);
    while (a>0){
        r = a%10;
        a /=10;
        b =b*10+r;
    }
    printf("b = %d\n",b);
    return 0;
}