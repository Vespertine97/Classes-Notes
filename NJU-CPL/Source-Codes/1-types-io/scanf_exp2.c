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
/*
1. %*[^\n]表示不在scanlist中的字符，*表示匹配上后丢弃

2. 缓冲区的说明*2
未匹配的内容会保留在缓冲区，最后一个scanf对缓冲区里的\n做清理。
%20s代表最多匹配20个字符（字符类型）
of表示输入中需要出现一模一样的of
而这里的unit和item
*/