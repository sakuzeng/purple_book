//triangle:���������������ߵĳ��ȣ������������ж��Ƿ���Ϊֱ�������ε�3���߳����������yes,�������no,���޷����������Σ����not a triangle
//input:3 4 5
//output:yes

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    //����
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