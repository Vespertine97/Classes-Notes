#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM 5
#define LIMIT 100

int main(){
    
    int number[NUM] = {0};
    srand(time(NULL));
    
    for(int i = 0; i< NUM; i++){
        number[i] = rand() % LIMIT;    
        printf("%d ", number[i]);
    }
    printf("\n");
    int min = number[0];
    for (int i = 1; i < NUM; i++){
        if(min > number[i])
            min = number[i];
    }
    printf("MIN: %d\n", min);
    return 0;
}