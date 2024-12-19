#include<stdio.h>
#include<ctype.h>
#include<limits.h>
int main(){
    char first_name[] = "Xiaoming";
    char last_name[] = "WANG";
    
    /**
     * Xiaoming WANG   M
     * 01-01-2000      Sat.
     * 100     85      90
     * 93.5    10%
     * 
     */
    //char full_name[] = "Tayu Luo";

    char gender = 'M';
    int gender_ascii = 0x4d;

    int year = 2000;
    int month = 1;
    int day = 1;
    char weekday[] = "Saturday";

    int C_oj = 100;
    int C_midexam = 85;
    int C_finalexam = 90;

    int rank = 10;
    printf("%s %s\t%c\t%c\n"
    "%.2d-%.2d-%d\t%.3s.\n" //mm-dd-yyyy
    "%d\t%d\t%d\n",
    first_name,last_name,gender,tolower(gender_ascii),
    month,day,year,weekday,
    C_oj,C_midexam,C_finalexam); 

    float score = C_oj * 0.4 + C_midexam * 0.1 + C_finalexam * 0.5;
    printf("%.1f\t%d%%", score, rank);
    
    printf("MAX: %d, MIN: %d", INT_MAX, INT_MIN);
    return 0;
}