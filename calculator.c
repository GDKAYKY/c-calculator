#include <stdio.h>

int main()
    {
        float n1, n2, result;
        int operator;

        printf("Enter first number: ");
        scanf("%f", &n1);
        printf("Enter second number: ");
        scanf("%f", &n2);   

        printf("Select operation (+, -, *, /): ");
        scanf(" %c", &operator);

        switch(operator)
        {
            case '+':
                result = n1 + n2;
                printf("%.2f + %.2f = %.2f\n", n1, n2, result);
                break;

            case '-':
                result = n1 - n2;
                printf("%.2f - %.2f = %.2f\n", n1, n2, result);
                break;

            case '*':
                result = n1 * n2;
                printf("%.2f * %.2f = %.2f\n", n1, n2, result);
                break;

            case '/':
                if(n2 != 0)
                {
                    result = n1 / n2;
                    printf("%.2f / %.2f = %.2f\n", n1, n2, result);
                }
                else
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            default:
                printf("Error: Invalid operator.\n");
        }
    }