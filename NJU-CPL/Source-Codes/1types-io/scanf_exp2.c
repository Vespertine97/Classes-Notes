#include<stdio.h>

int main(){
    /**
     2 quarts of oil
     -12.8degraea Celsius
     lots of luck
     10.0LBS of
     dirt
     100ergs of energy
     */
    //see https://stackoverflow.com/q/69426556/1833118
    //see https://sourceware.org/bugzilla/show_bug.cgi?id=1765#c1
    double quantity = 0;
    char unit[21] = "";
    char item [21] = "";
    while(scanf("%lf%20s of %20s", &quantity, unit, item)!=EOF){
        printf("quantity = %f \t units = %s \t item = %s \n", quantity, unit, item);
        scanf("%*[^\n]");
    }

}