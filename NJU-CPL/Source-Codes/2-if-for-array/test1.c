#include <stdio.h>

int main()
{
    /*
    int month, year;
    printf("Enter date:");
    scanf("%d / %d", &month, &year);

    printf("the date is %d-", month);
    printf("%d.\n", year);
    */

    int a, b, c;
    a = 1;
    b = a++;
    c = ++a;
    printf("%d %d %d", a, b, c);

    return 0;
}