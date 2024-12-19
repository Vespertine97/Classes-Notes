#include<stdio.h>
int main(){
    int  i; 
    double x;
    char name[50];

//input: 56789 0123 56a72
    scanf("%2d %lf %*d %[0123456789]", &i, &x, name);
    printf("i = %d\nx = %f\nname = %s", i, x, name);
}