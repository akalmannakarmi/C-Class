// WAP to display flag of Nepal.
// *
// **
// ***
// ****
// *****
// ******
// *******
// *
// **
// ***
// ****
// *****
// ******
// *******
// *
// *
// *
// *
// *
// *

#include <stdio.h>
int main(){
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < i%7 && i<14; j++)
        {
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}