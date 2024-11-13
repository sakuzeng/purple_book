//describe:average,输入3个整数，输出它们的平均值，保留3位小数
//input:2 3 5
//output:3.333
//编写时间:2024-10-18 18:02:58

#include <stdio.h>

int main(){
    int a, b, c;
    float avg;
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3.0;

    printf("%.3f\n", avg);
    return 0;
}