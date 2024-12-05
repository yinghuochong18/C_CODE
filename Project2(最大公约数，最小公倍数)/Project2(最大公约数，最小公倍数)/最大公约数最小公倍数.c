#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��д���Լ��GCD����
/*********Begin*********/
long long int gcd(long long int a, long long int b) {
    while (b != 0) {
        long long int c = b;
        b = a % b;
        a = c;
    }
    return a;
}
/*********End**********/

//��д��С������LCM����
/*********Begin*********/
long long int lcm(long long int a, long long int b) {
    return ((a * b) / gcd(a, b));
}
/*********End**********/
int main(void)
{
    /*********Begin*********/
    long long int d, e;
    scanf("%lld %lld", &d, &e);
    if (d < 0 || e < 0) {
        printf("Input Error");
    }
    else {
        long long int f = gcd(d, e);
        long long int g = lcm(d, e);
        printf("%lld %lld", f, g);
    }
    /*********End**********/
    return 0;
}