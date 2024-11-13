//pratice B1:
//输入12 s的结果中b是无意义的数字，当读入s时不匹配返回到输入流中待下一次调用。
#include <stdio.h>

int main(){
    int a, b;
    char ch;
    scanf("%d%d", &a, &b);
    scanf("%c", &ch);
    printf("%d %d %c\n", a, b, ch);

    return 0;
}