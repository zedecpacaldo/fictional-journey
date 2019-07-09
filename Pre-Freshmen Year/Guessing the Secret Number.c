#include <stdio.h>
#include <stdlib.h>


int main()
{

    int secretNumber = 5; //Change this to whatever you like.
    int guess;
    int tries = 0;
    int guessLimit = 3;
    int outOfGuess = 0;


    while (guess != secretNumber && outOfGuess == 0){
        if(tries < guessLimit){
            printf("Guess the secret number. You have %d out of %d tries left. ", tries, guessLimit);
            scanf("%d", &guess);
            tries++;
            } else {
                outOfGuess = 1;
                }
    }

    if(outOfGuess == 1){
        printf("You have ran out of tries. You lost.");
        } else {
            printf("You are correct! You win!");
            }

    return 0;
}




