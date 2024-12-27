#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROCK 1  
#define PAPER 2
#define SCISSORS 3

int main()
{


    srand(time(NULL));

    int player_throw = 0;
    int computer_throw = 0;
    bool draw = false;

    do {

        printf("Select your throw:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &player_throw);

        computer_throw = (rand() % 3) + 1;

        if (computer_throw == ROCK) {
            printf("Computer throws Rock\n");
        } else if (computer_throw == PAPER) {
            printf("Computer throws Paper\n");
        } else {
            printf("Computer throws Scissors\n");
        }

        draw = false;

        if (player_throw == computer_throw) {
            printf("It's a draw!\n");
            draw = true;
        } else if (player_throw == ROCK && computer_throw == SCISSORS) {
            printf("You win!\n");
        } else if (player_throw == PAPER && computer_throw == ROCK) {
            printf("You win!\n");
        } else if (player_throw == SCISSORS && computer_throw == PAPER) {
            printf("You win!\n");
        } else {
            printf("You lose!\n");
        }



    } while ( draw );


    return 0;
}