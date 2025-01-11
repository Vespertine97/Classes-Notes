#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //(1) set the upper limit to 100, and number of tries to 7
    int upper_limit = 100;
    int number_of_tries = 7;
    printf("Let's play the \"Guess the number\" game!\n"
    "The number of between 1 and %d!\n"
    "You have %d tries in total.\n", upper_limit, number_of_tries);
    
    //(2) generate a random number for reward
    srand(time(NULL)); //use current time as seed for random generator
    int reward_num = rand() % upper_limit + 1;//obtaining 1--100 reward number
    printf("Reward number is %d.\n", reward_num);
    
    //(5) repeat (3-4) until you win or lose
    // while (number_of_tries > 0)
    while(number_of_tries > 0){

        printf("You still have [%d] tries.\n", number_of_tries);

        //(3) enter your guess
        int guess = 0;
        printf("Please enter your guess (1--100).\n");
        scanf("%d", &guess);//important !!! &
        printf("Your guess is %d.\n", guess);
        
        //(4) compare the guess and reward_num
        if(guess == reward_num){ // == not equal to =
            printf("YOU WIN!!!\n");
            break;
        }
        else if(guess > reward_num){
            printf("Wrong. guess > reward.\n");
        }
        else{
            printf("Wrong. guess < reward.\n");
        }

        number_of_tries --;//a-- --> a=a-1
    }
    
    //printf("number_of_tries: %d\n", number_of_tries);
    if(number_of_tries == 0)
        printf("YOU LOSE!!!\n");
    return 0;


}