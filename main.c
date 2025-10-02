#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2;
    char operator;

    printf("Enter an expression: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("= %d", num1 + num2);
            break;
        case '-':
            printf("= %d", num1 - num2);
            break;
        case '*':
            printf("= %d", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("= %f", (float)num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

	
	
	return 0;
}