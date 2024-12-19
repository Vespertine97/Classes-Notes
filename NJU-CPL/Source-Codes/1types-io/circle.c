#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    float radius = 10.5;
    const float PI2 = 3.14;

    scanf("%f", &radius);
    float circu = 2 * PI * radius;
    float area = PI * radius * radius;
    
    float surface = 4 * PI * radius * radius;
    float volume = PI * pow(radius, 3) * 4 / 3;

    printf("%10.4f : circumference\n", circu);
    printf("%10.4f : area\n", area);
    printf("%-10.4f : surface\n", surface);
    printf("%-10.4f : volume\n", volume);

    return 0;
}