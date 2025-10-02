#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int answer = 37;
    int guess, tries = 0;

    while (printf("Guess a number: "), scanf("%d", &guess) == 1) {
        tries++;
        if (guess < answer) {
            printf("Low!\n");
        } else if (guess > answer) {
            printf("High!\n");
        } else {
            printf("Congratulations! tries: %d\n", tries);
            break;
        }
    }
	
	return 0;
}