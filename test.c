#include <stdio.h>

int main(){
    int a;
    float b;
    char rr[66];
    char s[1];
    printf("\nInput Integer");
    scanf("%d",&a);
    printf("\nInput String=");
    scanf("%s",rr);
    printf("\nInput Float");
    scanf("%f",&b);
    printf("\n Integer=%d \n float=%.1f \n char=? string=%s",a,b,&rr);
    printf("\nInput Char");
    scanf("%s",s);
    printf("\n Integer=%d \n float=%.1f \n char=%s string=%s",a,b,s,&rr);
    return 0;
}