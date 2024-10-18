//三整数排序，输入三个整数，从小到大输出
//样例输入：20 7 33
//样例输出：7 20 33
//编写时间:2024-10-17 21:28:37
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a > b){//a比b大，a的值向上浮动
        int temp = a;
        a = b;
        b = temp;
    }
    if(b > c){//b比c大，c的值向上浮动
        int temp = b;
        a = c;
        c = temp;
    }

    printf("%d %d %d\n", a, b, c);
    
    return 0;
}