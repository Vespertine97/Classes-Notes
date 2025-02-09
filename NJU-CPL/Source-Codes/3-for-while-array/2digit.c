#include<stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    int count = 0;
    do{
        num = num / 10;
        count ++;
    }while (num > 0);
    
    printf("%d\n", count);

    //num = 1234
    //1234 > 0 : num = 123. count = 1
    //123 > 0 : num = 12, count = 2
    //12 > 0: num = 1, countunt = 2
    return 0;
}