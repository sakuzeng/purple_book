//�ж���������Ƿ�Ϊ����,����ǣ����yes,�������no
//input:1900
//output:no

#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){//�ܱ�4�����Ҳ��ܱ�100���������ܱ�400����
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}