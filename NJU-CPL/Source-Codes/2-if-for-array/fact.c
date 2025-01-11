#include<stdio.h>

int main(){
    int n;
    printf("Please enter an integer (n): ");
    scanf("%d", &n);
    int result = 1;
    for(int i = 2; i<=n; i++){
        result *= i;
    }        
    printf("n! = %d\n", result);
    return 0;
}