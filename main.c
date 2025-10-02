#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, i;
	int sum;
	
	sum = 0;
	
	printf("Input a number: ");
	scanf("%i", &a);
	
	for (i = 1; i <= a;i++)
		sum = sum + i;
	
	printf("The result is: %i", sum);
	
	return 0;
}