//��֪�����õ�������Ϊn, ��������m������n, m, ��������õ���, �޽����No answer
//�������룺14 32
//���������12 2
//�������룺10 16
//���������No answer
//��дʱ��:2024-10-17 20:35:30
#include <stdio.h>

int main(){
    int n, m, x, y;
    scanf("%d%d", &n, &m);
    //2 * x + 4 * y = m, x + y = n;
    x = (4 * n - m) / 2;
    y = n - x;
    
    if(m % 2 == 1 || x < 0 || y < 0)
        printf("No answer\n");
    else
        printf("%d %d\n", x, y);
    return 0;
}