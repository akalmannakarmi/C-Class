// 1) WAP to imput two integer numbers and display the sum of even numbers between these two input numbers
// [a,b)
#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    a++;
    while (a<b){
        if (a%2==0)
        {sum += a;}
        a++;
    }
    printf("Sum: %d",sum);
    return 0;
}
