#include <stdio.h>

int main(void)
{
    int num1 = 12;
    int num2 = 4;
    char op = '&';   // Changez cette valeur pour tester d'autres opérations

    switch (op)
    {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Erreur : division par zéro !\n");
            break;

        case '%':
            if (num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : modulo par zéro !\n");
            break;

        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;

        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;

        case '~':
            // Le NOT bit à bit (~) ne dépend pas de num2
            printf("~%d = %d\n", num1, ~num1);
            break;

        default:
            printf("Opérateur inconnu : %c\n", op);
    }

    return 0;
}


