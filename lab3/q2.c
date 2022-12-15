// 2. WAP to input a currency in values in Dollars & 
// display its equivalent Euro & INR amounts. You may use
// current exchange rate for conversion purpose

#include <stdio.h>
int main(){
    float IRsConv = 82.76;
    float EuroConv = 0.94;
    float Dollars;
    printf("Enter Dollars:");
    scanf("%f",&Dollars);
    printf("Current Euro value: %f\n",Dollars*EuroConv);
    printf("Current IRs value: %f\n",Dollars*IRsConv);
    return 0;
}