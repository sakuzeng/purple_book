//��������������������������С�������
//�������룺20 7 33
//���������7 20 33
//��дʱ��:2024-10-17 21:28:37
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a > b){//a��b��a��ֵ���ϸ���
        int temp = a;
        a = b;
        b = temp;
    }
    if(b > c){//b��c��c��ֵ���ϸ���
        int temp = b;
        a = c;
        c = temp;
    }

    printf("%d %d %d\n", a, b, c);
    
    return 0;
}