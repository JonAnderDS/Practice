
#include <stdio.h>

int main (void)
{
    int final1, final2, final3;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &final3,&final2,&final1);

    printf("The reversal is: %d%d%d\n", final1,final2, final3);


    return 0;
}