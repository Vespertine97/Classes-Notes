#include <stdio.h>

int main(){
    int a = 1; 
    int b = 2;

    int x = a > b? a : b;
    int y = (a > 0 ? a : 0) + b;//ternary的优先级低于+，所以需要加括号才能使ternary先运行

    printf("%d\n", x);
    printf("%d\n", y);

}