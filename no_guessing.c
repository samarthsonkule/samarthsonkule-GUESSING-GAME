#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int RandomNumber , userGuess , attempts =0 ;

    //Seed the random number generator based on current time
    srand(time(NULL));

    //Generate a random number between 1 to 100
    RandomNumber = rand() %10 +1;

    //welcome message
    printf("Welcome to the Guess the Number Game!\n");

    //Guessing loop
    do {
        //prompt the user to enter a guess
        printf("Input your guess (between 1 to 10):");
        scanf("%d" ,&userGuess);

        //increament the no of attempts
        attempts++;

        //check if the guess is coorect
        if (userGuess == RandomNumber) {
            printf("Congrats you guessed correct number");
        }
        else if (userGuess < RandomNumber) {
            printf("Number is too low. Try again \n");
        }
        else {
            printf("Number is too high. Try again!\n");
        }
    }
    while (userGuess != RandomNumber); 

    return 0;
}