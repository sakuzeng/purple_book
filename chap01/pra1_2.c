//describe:输入华氏温度f,输出对应的摄氏温度c。(c = 5 *(f - 32) / 9)
//input:68.0
//output:
//编写时间:2024-10-18 19:40:15

#include <stdio.h>

int main(){
    float f, c;
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("%f\n", c);
    return 0;
}