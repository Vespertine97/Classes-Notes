#include<stdio.h>
int main(){

    int row;
    scanf("%d", &row);
    for(int i = 1; i <= row; i++){
        //row i, row-i white-space, and 2i-1 *
        for(int j = 0; j < row - i; j++){
            printf(" ");
        }
        for(int j = 0; j < 2 * i - 1; j++){
            printf("*");
        }
        if(i != row)
            printf("\n");
    }
    return 0;

}