//describe:输入正整数n(n<=360), 输出n的正弦值和余弦值。(角度，弧度转换公式：弧度=Pi * (n / 180.0))
//input:30
//output:
//编写时间:2024-10-18 20:08:23
#include <stdio.h>
#include <math.h>
int main(){
    const double pi = acos(-1.0);//π
    int n;
    double hn;
    scanf("%d", &n);
    hn = pi * (n / 180.0);//除以浮点数以得到浮点数结果
    printf("%f\n%f\n", sin(hn), cos(hn));

    return 0;
}