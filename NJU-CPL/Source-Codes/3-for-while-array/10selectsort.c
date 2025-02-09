#include<stdio.h>

/**
 * @brief 
 * VLA: variable-length array
 * C99 introduces VLA
 * C11 makes it optional
 */
#define MAX 9

//tc: 29 72 98 13 87 66 52 51 36
int main(){
    int num[MAX] = {0};//MAX, cannot be n
    
    int len = -1;
    while (scanf("%d", &num[++len])!=EOF);
    
    //enter the array
    for(int i = 0; i< len; i++)
        printf("%d ", num[i]);
    printf("\n");
    for(int i = 0; i< len; i++){// move the smallest one between [i, MAX) to location i
        //find the smallest one between [i, MAX)
        int num_smallest = num[i];
        int location_smallest = i;
        for(int j = i + 1; j < len; j++){
            if(num[j]<num_smallest){
                num_smallest = num[j];
                location_smallest = j;
            }
        }
        //swap it with location i
        if(i != location_smallest){
            int temp = num[i];
            num[i] = num_smallest;
            num[location_smallest] = temp;
        
            //display
            for (int k = 0; k < len; k++){
                if(k == i)
                    printf("\033[47;31m%d\033[0m ", num[k]);
                else if(k == location_smallest) 
                    printf("\033[47;34m%d\033[0m ", num[k]);
                else 
                    printf("%d ", num[k]);
            }
            printf("\n");
        }
        //disaplay2
    }
    return 0;
}