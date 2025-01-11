#include<stdio.h>

int main(){
    int month;
    scanf("%d", &month);
    switch (month)//int
    {
    case 1:    printf("Janurary"); break;
    case 2:    printf("Februrary"); break;
    case 3:    printf("March"); break;
    case 4:    printf("April"); break;
    case 5:    printf("May"); break;
    case 6:    printf("June"); break;
    case 7:    printf("July"); break;
    case 8:    printf("August"); break;
    case 9:    printf("September"); break;
    case 10:    printf("October"); break;
    case 11:    printf("November"); break;
    case 12:    printf("December"); break;
    
    default:
        printf("Wrong month entered.\n");
        break;
    }
    
}