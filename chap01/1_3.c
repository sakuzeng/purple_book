//交换变量，输入两个整数a, b，交换两者的值并输出
//样例输入：824 16
//样例输出：16 824
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