//describe:average,����3��������������ǵ�ƽ��ֵ������3λС��
//input:2 3 5
//output:3.333
//��дʱ��:2024-10-18 18:02:58

#include <stdio.h>

int main(){
    int a, b, c;
    float avg;
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3.0;

    printf("%.3f\n", avg);
    return 0;
}