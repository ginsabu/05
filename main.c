#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("Input an integer: ");
	scanf("%i", &a);
	
	if (a > 0)
		printf("It's positive number");
	else
		printf("It's negative number");	

	return 0;
}