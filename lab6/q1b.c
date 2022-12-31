// WAP to print palindrome
# include <stdio.h>
int main(){
    int a,t,r,b=0;
    printf("Enter any +ve integer: ");
    scanf("%d",&a);
    t = a;
    while (a>0){
        r = a%10;
        a /=10;
        b=b*10+r;
    }
    if(t==b){
        printf("%d is a palindrome\n",t);
    }else{
        printf("%d is not a palindrome\n",t);
    }
    return 0;
}