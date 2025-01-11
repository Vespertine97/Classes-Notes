#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    float radius = 10.5;
    const float PI2 = 3.14;

    scanf("%f", &radius);//tips：printf不需要取地址
    float circu = 2 * PI * radius;
    float area = PI * radius * radius;
    
    float surface = 4 * PI * radius * radius;
    float volume = PI * pow(radius, 3) * 4 / 3;

    printf("%10.4f : circumference\n", circu);//以十进制的形式显示变量，至少占用10个字符，小数点后保留4位数字
    printf("%10.4f : area\n", area);
    printf("%-10.4f : surface\n", surface);//"-"表示左对齐
    printf("%-10.4f : volume\n", volume);

    return 0;
}