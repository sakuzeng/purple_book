//describe:���뻪���¶�f,�����Ӧ�������¶�c��(c = 5 *(f - 32) / 9)
//input:68.0
//output:
//��дʱ��:2024-10-18 19:40:15

#include <stdio.h>

int main(){
    float f, c;
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("%f\n", c);
    return 0;
}