#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int answer = 37;
    int guess, tries = 0;

    do {
        printf("Guess a number: ");
        if (scanf("%d", &guess) != 1) return 0;

        tries++;
        if (guess < answer) {
            printf("Low!\n");
        } else if (guess > answer) {
            printf("High!\n");
        }
    } while (guess != answer);

    printf("Congratulations! tries: %d\n", tries);
	
	return 0;
}