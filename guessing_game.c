#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int random, guess;
    int no_of_guesses=0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers\n");
    random = rand()%100+1; //generating between 0 to 100

    do{
        printf("Please enter your Guess between 1 to 100: ");
        scanf("%d", &guess);
        no_of_guesses++;

        if(guess < random){
            printf("\n Guess larger number. \n");
        } else if(guess > random){
            printf("\n Guess smaller number. \n");
        } else {
            printf("\n Congratulationsss !!! You have successfully guessed the Number in %d attempts", no_of_guesses);
        }

    } while(guess != random);

    printf("\n Thanks for playing. See you again Batman");
    printf("\n Developed by Samiur Rahman \n");

}
