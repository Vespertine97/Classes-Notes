#include<stdio.h>
#include<windows.h>
int main(){

    for (int n = 10; n>0; n--){
        printf("T minus %d and counting. \n", n);
        Sleep(1000);
    }
    return 0;
}