#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("Input an integer: ");
	scanf("%i", &a);
	printf("Absoulute Value: ");
	
	if (a > 0 | a == 0)
		printf("%i", a);
	else
		printf("%i", -a);	

	return 0;
}