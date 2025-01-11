#include <stdio.h>
#include <ctype.h>
#include <limits.h>
int main()
{
    char first_name[20];
    char last_name[5];
    char gender;
    /**
     * Xiaoming WANG   M
     * 01-01-2000      Sat.
     * 100     85      90
     * 10%
     *
     */
    // char full_name[] = "Tayu Luo";

    int year;
    int month;
    int day;
    char weekday[10];

    int C_oj;
    int C_midexam;
    int C_finalexam;

    int rank;
    scanf("%s %s %c", first_name, last_name, &gender);
    scanf("%d-%d-%d %s", &month, &day, &year, weekday);
    scanf("%d %d %d", &C_oj, &C_midexam, &C_finalexam);
    scanf("%d %%", &rank);

    printf("%s %s\t%c\n"//"\t"表示制表符（不知道会跳多远，不由C语言决定）
           "%.2d-%.2d-%d\t%.3s.\n" // mm-dd-yyyy，"%.2d"表示至少有2位数字
           "%d\t%d\t%d\n",
           first_name, last_name, gender,
           month, day, year, weekday,
           C_oj, C_midexam, C_finalexam);

    float score = C_oj * 0.4 + C_midexam * 0.1 + C_finalexam * 0.5;
    printf("%.1f\t%d%%", score, rank);

    return 0;
}