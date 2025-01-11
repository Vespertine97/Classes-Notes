#include<stdio.h>

int main(){
    int month;
    scanf("%d", &month);
    switch (month)
    {
    case 3:  case 4: case 5:    printf("Spring"); break;
    case 6:  case 7: case 8:    printf("Summer"); break;
    case 9:  case 10: case 11:    printf("Fall"); break;
    case 12:  case 1: case 2:    printf("Winter"); break;
    
    default:
        printf("Wrong month entered.\n");
        break;
    }

}

/*
1. case后面写的需要是一个常量值，不可以是表达式或者变量

2.一个大括号里定义的变量出了这个作用域是不存在的，内侧定义的同名变量会覆盖掉外侧的

3. 在switch内部最好是不要定义变量
*/