//����������������������a, b���������ߵ�ֵ�����
//�������룺824 16
//���������16 824
#include <stdio.h>

int main(){
    int a, b, temp;
    
    scanf("%d%d", &a, &b);

    temp = b;
    b = a;
    a = temp;

    printf("%d %d\n", a, b);
    //Keep It Simple and Stupid(KISS)
    //printf("%d %d\n", b, a);
    return 0;
}