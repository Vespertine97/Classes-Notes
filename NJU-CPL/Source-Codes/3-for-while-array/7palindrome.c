#include<stdio.h>

#define MAX 21
char str[MAX] = "";

int main(){
    scanf("%20s", str);
    int len = -1;
    while (str[++len]!='\0');
    printf("len: %d\n", len);
    int res = 1;
    for(int i = 0, j = len -1; i<j; i++, j--){
    //for(int i = 0; i < len / 2; i++){
        //int j = len - i - 1;
        if(str[i] != str[j]){
            res = 0;
            break;
        }
    }
    printf("\"%s\" is %sa palindrome.\n", str, res == 0 ? "not ": "");

}