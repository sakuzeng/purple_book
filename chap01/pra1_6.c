//triangle:输入三角形三条边的长度（正整数），判断是否能为直角三角形的3个边长，可以输出yes,不能输出no,若无法构成三角形，输出not a triangle
//input:3 4 5
//output:yes

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    //排序
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    if(a + b <= c){
        printf("not a triangle\n");
        return 0;
    }
    if(a * a + b * b == c * c){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}