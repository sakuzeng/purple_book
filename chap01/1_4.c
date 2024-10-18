//已知鸡和兔的总数量为n, 总腿数是m，输入n, m, 输出鸡和兔的数, 无解输出No answer
//样例输入：14 32
//样例输出：12 2
//样例输入：10 16
//样例输出：No answer
//编写时间:2024-10-17 20:35:30
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