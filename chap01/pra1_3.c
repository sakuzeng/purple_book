//describe:�����ͣ����1��n֮�͵�ֵ
//input:5
//output:15
//�Ȳ�������ͣ�(n * (a1 + an)) / 2;

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", (n * (1 + n)) / 2);
    return 0;
}