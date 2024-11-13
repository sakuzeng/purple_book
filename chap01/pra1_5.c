//discount:一件衣服95元，若消费满300元，可打八五折。输入购买衣服件数，输出需要支付的金额（单位：元），保留两位小数
//input:4
//output:323.00
//编写时间:2024-10-24 09:20:30
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