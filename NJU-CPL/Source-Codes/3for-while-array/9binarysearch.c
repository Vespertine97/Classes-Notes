#include <stdio.h>
#define LEN 10
int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

int main(){
    int key;
    scanf("%d", &key);
    int index = -1;
    int low = 0;
    int high = LEN - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(key > dict[mid])
            low = mid + 1;
        else if(key < dict[mid])
            high = mid - 1;
        else{
            index = mid;
            break; //key = dict[mid]
        }
    }
    if(index == -1)
        printf("Not found!\n");
    else   
        printf("Index: %d\n", index);
    return 0;    
}