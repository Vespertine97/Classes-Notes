#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int number_of_tries = 7;
    int bomb = rand()%100;
    //printf("Please enter your guess [1, 100].");
    printf("bomb: %d\n", bomb);
    int guess;
    do{
        printf("Please enter your guess [1, 100].\n");
        scanf("%d", &guess);
    }while(guess!=bomb);

    return 0;

}