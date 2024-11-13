//判断输入年份是否为闰年,如果是，输出yes,否则输出no
//input:1900
//output:no

#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){//能被4整除且不能被100整除或者能被400整除
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}