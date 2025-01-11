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
1. 当只有一条语句时可以不加大括号，这时也默认只包括一个语句
而在if条件后打了一个分号会被认为是一个单独的空语句
如   if(a < b);    会被认为是  if(a < b){;}

2. else语句会匹配最近的、不被大括号隔开的if语句

3. 注意区分逻辑运算符==和赋值运算符=！！！

4. 如果只有一个&，那代表把两边的值按二进制位进行比较（位运算）
（不要写错了）
*/