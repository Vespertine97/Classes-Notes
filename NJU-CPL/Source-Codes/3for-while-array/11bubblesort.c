#include<stdio.h>
#include<stdbool.h>
#define MAX 20

int main(){
    int num[MAX] = {0};//MAX, cannot be n
    int len = -1;
    while (scanf("%d", &num[++len])!=EOF);
    
    //enter the array
    //for(int i = 0; i< len; i++)
    //    printf("%d ", num[i]);
    //printf("\n");

    for(int i = 0; i< len; i++){
        //move the ith largest to the location len - i -1

        bool has_swap = false;
        //compare each neighbour from 0 to len - i
        for(int j = 0; j < len-i-1; j++){
            if(num[j] > num[j+1]){
                //swap if num[j] is larger
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
                has_swap = true;
            }
        }
        //display
        for (int k = 0; k < len; k++){
            if(k == len - i - 1)
                printf("\033[47;31m%d\033[0m ", num[k]);
            else 
                printf("%d ", num[k]);
        }
        printf("\n");
        if(!has_swap)
            break;
    }
}