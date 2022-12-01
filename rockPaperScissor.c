//
// Created by KraKss on 01/12/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROCK 1
#define PAPER 2
#define SCISSOR 3

int getRandomChoice();

int main() {
    int playerChoice;
    printf("Choose between 1 of those 3\n1. Rock\n2. Paper\n3. Scissor\nChoice : ");
    scanf("%d", &playerChoice);
    switch(playerChoice)
    {
        case ROCK:
            printf("You chose Rock\n");
            break;
        case PAPER:
            printf("You chose Paper\n");
            break;
        case SCISSOR:
            printf("You chose Scissor\n");
            break;
        default:
            printf("You chose an invalid choice\n");
    }

    int randomChoice = getRandomChoice();
    switch(randomChoice)
    {
        case ROCK:
            if (playerChoice == ROCK) {
                printf("Computer chose Rock\nIt's a tie\n");
            } else if (playerChoice == PAPER) {
                printf("Computer chose Rock\nYou win\n");
            } else if (playerChoice == SCISSOR) {
                printf("Computer chose Rock\nYou lose\n");
            }
            break;
        case PAPER:
            if (playerChoice == ROCK) {
                printf("Computer chose Paper\nYou lose\n");
            } else if (playerChoice == PAPER) {
                printf("Computer chose Paper\nIt's a tie\n");
            } else if (playerChoice == SCISSOR) {
                printf("Computer chose Paper\nYou win\n");
            }
            break;
        case SCISSOR:
            if (playerChoice == ROCK) {
                printf("Computer chose Scissor\nYou win\n");
            } else if (playerChoice == PAPER) {
                printf("Computer chose Scissor\nYou lose\n");
            } else if (playerChoice == SCISSOR) {
                printf("Computer chose Scissor\nIt's a tie\n");
            }
            break;
        default:
            printf("An error has occured\n");
    }
}

int getRandomChoice() {
    srand(time(NULL)); // if not used the random number will always be the same I don't know why tho

    int verifiedRandomNumber, randonNumber;
    randonNumber = rand()%(3+1); // + 1 because rand() takes 3 number - 0/1/2 but we want 1/2/3
    verifiedRandomNumber = randonNumber == 0 ? 1 : randonNumber; // if randomNumber is 0, it will be 1 since rock is 1

    return verifiedRandomNumber;
}