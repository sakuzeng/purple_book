//计算圆柱体的体积
//输入：底面半径r和高h
//输出：表面积
//样例输入：3.5 9
//样例输出：Area = 274.889
//2024/10/16
//指令
#include <stdio.h>
#include <math.h>

int main(){
    const double pi = acos(-1.0);//π
    //定义
    double r, h, s1, s2, s;
    //输入
    scanf("%lf%lf", &r, &h);
    //计算
    s1 = pi * r * r;
    s2 = 2 * pi * r * h;
    s = 2 * s1 + s2;
    //输出
    printf("Area = %.3lf\n", s);

    return 0;
}