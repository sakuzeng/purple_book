//describe:����������n(n<=360), ���n������ֵ������ֵ��(�Ƕȣ�����ת����ʽ������=Pi * (n / 180.0))
//input:30
//output:
//��дʱ��:2024-10-18 20:08:23
#include <stdio.h>
#include <math.h>
int main(){
    const double pi = acos(-1.0);//��
    int n;
    double hn;
    scanf("%d", &n);
    hn = pi * (n / 180.0);//���Ը������Եõ����������
    printf("%f\n%f\n", sin(hn), cos(hn));

    return 0;
}