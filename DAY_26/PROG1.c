#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void number_guessing_game(int a);
int main() {
    srand(time(NULL));
    int a = rand() % 10;
    printf("READY FOR THE GAME?\n");
    printf("GUESS BETWEEN 0 TO 9.\n");
    printf("YOU HAVE 5 GUESSES.....\n");
    number_guessing_game(a);
    return 0;
}
void number_guessing_game(int a) {
    for (int i = 0; i < 5; i++) {
        int num;
        printf("Enter guess number %d: ", i + 1);
        scanf("%d", &num);       
        if (num == a) {
            printf("CORRECT GUESS!!!\n");
            printf("YOU WIN...\n");
            break; 
        } else {
            printf("INCORRECT ANSWER!!!\n");
            printf("ONLY %d GUESSES LEFT.\n", 5 - i - 1);
        }
    }
}