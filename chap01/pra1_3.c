//describe:连续和，输出1至n之和的值
//input:5
//output:15
//等差数列求和，(n * (a1 + an)) / 2;

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", (n * (1 + n)) / 2);
    return 0;
}