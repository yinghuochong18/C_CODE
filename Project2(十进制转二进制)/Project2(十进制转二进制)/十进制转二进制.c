#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//递归法 十进制转二进制（范围）
int f(int n) {
    if (n < 2) {
        printf("%d", n);
    }
    else {
        f(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int a, b, n, j;
    scanf("%d %d", &a, &b);
    for (n = a;n <= b;n++) {
        f(n);
        printf("\n");
    }
    return 0;
}



