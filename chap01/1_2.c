//三位数反转
//输入：一个三位数
//输出：反转后的数字
//样例输入：127
//样例输出：721
//2024-10-16 16:35:11
#include <stdio.h>

int main(){
    int n, res;
    
    scanf("%d", &n);
    res = n % 10 * 100 + n / 10 % 10 * 10 + n / 100;

    printf("%d\n", res);

    return 0;
}