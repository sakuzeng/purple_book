//输出int型整数的最大最小值
#include <stdio.h>

int main(){
    int i, int_min, int_max;
    while(1){
        if(i + 1 < 0){
            int_max = i;
            int_min = i + 1;
        }
        i++;
    }
    printf("%d\n%d\n", int_max, int_min);
    return 0;
}