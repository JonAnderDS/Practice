

#include <stdio.h>

int main (void) 
{
    int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12;
    int sum1, sum2;


    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &v1,&v2,&v3,&v4,&v5,&v6,&v7,&v8,&v9,&v10,&v11);

    sum1 = v1+v3+v5+v7+v9+v11;
    sum2 = v2+v4+v6+v8+v10;

    v12= 9 - ((((sum1*3) + sum2)-1) % 10 );
    printf("Check digit: %d\n", v12);


    return 0;
}