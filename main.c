#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("Input an integer: ");
	scanf("%i", &a);
	
	if (a > 0)
		printf("It's positive number");
	else if (a < 0)
		printf("It's negative number");	
	else
		printf("It's 0");

	return 0;
}