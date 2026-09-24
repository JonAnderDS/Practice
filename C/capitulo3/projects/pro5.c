

#include <stdio.h>

int main (void) 
{
    int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16;
    int r1, r2, r3, r4, c1, c2, c3, c4, d1, d2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9, &v10, &v11, &v12, &v13, &v14, &v15, &v16);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);

    r1 =v1 + v2+ v3+ v4;
    r2 = v5+v6+v7+v8;
    r3=v9+v10+v11+v12;
    r4=v13+v14+v15+v16;
    c1=v1+v5+v9+v13;
    c2=v2+v6+v10+v14;
    c3=v3+v7+v11+v15;
    c4=v4+v8+v12+v16;
    d1=v1+v6+v11+v16;
    d2=v4+v7+v10+v13;
    printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);
    printf("Column sums: %d %d %d %d\n", c1, c2, c3, c4);
    printf("Diagonal sums: %d %d\n", d1, d2);

    return 0;
}