//discount:һ���·�95Ԫ����������300Ԫ���ɴ�����ۡ����빺���·������������Ҫ֧���Ľ���λ��Ԫ����������λС��
//input:4
//output:323.00
//��дʱ��:2024-10-24 09:20:30
#include <stdio.h>

int main(){
    int n, sum;
    scanf("%d", &n);
    if(n > 3){
        printf("%.2f\n", n * 95.0 * 0.85);
    }
    else{
        printf("%.2f\n", n * 95.0);
    }

    return 0;
}