#define _CRT_SECURE_NO_WARNINGS 1
//从标准输入依次读入给定若干个在 int 范围内的整数，请编程将他们按照读入顺序的倒序输出。
#include <stdio.h>
void Rua();
int main() {
    Rua();//调用递归函数
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