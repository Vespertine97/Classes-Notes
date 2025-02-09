#include<stdio.h>
#include<math.h>
int main(){
    int n; 
    //scanf("%d", &n);
    n = 3;
    int first = 1;
    /*for (int i = 1; i < n; i++)
    {
        first *= 10;
    }*/
    first = pow(10,n-1);
    printf("First: %d\n", first);
    for(int i = first; i < first* 10; i++){
        int t = i;
        int sum = 0;
        do{
            int d = t % 10;
            /*int p = 1;
            for (int j = 0; j <n; j++){
                p = p * d;
            }*/
            int p = pow(d, n);
            sum += p;
            t = t/10;
        }while (t > 0);
        if(sum == i){
            printf("%d\n", i);
        }
    }
    return 0;
}