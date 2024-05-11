#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

const int MINNUM = 1;   // The range of numbers to be generated
const int MAXNUM = 100;

int userGuess;
int guessesMade = 0;
int answer;


srand(time(0)); // creates a seed from current time to generate a  random number

answer = (rand() % MAXNUM) + MINNUM; // Uses the given range to generate a random number

printf("Welcome to the number guessing game! \n ");


    do{
    printf("Enter a guess: ");
    scanf("%d", &userGuess);
    if(userGuess > answer){
        printf("Too High! \n");
    }
    else if(userGuess < answer){
        printf("Too Low! \n");
    }
    else{
        printf("Correct! \n");
    }
    guessesMade++;
    }while(userGuess != answer); // Loops until correct answer is given.

    printf("The answer was %d ", answer);
    printf("and it took you %d guesses!", guessesMade);

    return 0;
}
