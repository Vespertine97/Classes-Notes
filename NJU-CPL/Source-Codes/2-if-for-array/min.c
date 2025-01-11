#include<stdio.h>

int main(){
    int a, b, c;
    printf("Please enter integers for a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= b && a <= c) 
        printf("a is min: %d\n", a);
    else if(b <= a && b <= c)
        printf("b is min: %d\n", b);
    else
        printf("c is min: %d\n", c);
        
    return 0;
}

/*
1. 

2. 

*/