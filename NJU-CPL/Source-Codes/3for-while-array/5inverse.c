#include<stdio.h>
int main(){

    int x;
    scanf("%d", &x);

    int ret;
    int digit;
    while (x>0){
        digit = x%10;
        x = x/10;
        ret = ret * 10 + digit;
        printf("%d",digit);
        //printf("digit = %d, ret = %d\n", digit, ret); 
    }
    printf("\n");

}