#define _CRT_SECURE_NO_WARNINGS 1
//�ӱ�׼�������ζ���������ɸ��� int ��Χ�ڵ����������̽����ǰ��ն���˳��ĵ��������
#include <stdio.h>
void Rua();
int main() {
    Rua();//���õݹ麯��
    return 0;
}

void Rua() {
    /**********Begin**********/
    int n, index = 0;
    int ch[100];
    while (scanf("%d", &n) != EOF) {
        ch[index++] = n;
        printf("\n");
        Rua();
    }
    if (index > 0) {
        printf("%d\n", ch[--index]);
    }
    /**********End**********/
}