
#include <stdio.h>

int main(void)
{
    float resultado = 0.0f;
    float operando = 0.0f;
    char ch;

    printf("Enter an expression: ");

    scanf("%f", &resultado);

    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case '+':
                scanf("%f", &operando);
                resultado += operando;
                break;
            case '-':
                scanf("%f", &operando);
                resultado -= operando;
                break;
            case '*':
                scanf("%f", &operando);
                resultado *= operando;
                break;
            case '/':
                scanf("%f", &operando);
                resultado /= operando;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %.1f\n", resultado);

    return 0;
}