#include<stdio.h>
int main(){
    int  i; 
    double x;
    char name[50];

//input: 56789 0123 56a72
    int m = scanf("%2d %lf %*d %[0123456789]", &i, &x, name);
    int n = printf("\ni = %d\nx = %f\nname = %s", i, x, name);

    printf("\n%d %d", m, n);
}

/*
1. 关于printf和scanf的返回值：
表示匹配到的字符串的数量，如n就表示从\n开始算起的总字符数

2. 关于缓冲区的说明
%2d表示匹配两个整数字符，lf是匹配double类型的小数，%*d表示匹配到字符后丢弃掉
%[abc]表示只匹配scanlist（扫描列表）里的字符
如输入56789 0123 56a72，就匹配到56，789.000000，丢弃0123，匹配到56，a72在缓冲区

3. scanf匹配不成功会退出
*/