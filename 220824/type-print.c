#include <stdio.h>
int main( )
{
    int a = 2147483647;
    unsigned int b = 4294967295UL; // 부호가 없는 정수
    long long int c = 9223372036854775807; // 더 넓은 범위 Long
    unsigned long long int d = 18446744073709551614UL;
    float e = 0.12345678912345f; // %f
    double f = 0.12345678912345; // float보다 넓은 범위 표현 가능 / %lf 사용

    printf("%d\n", a);
    printf("%u\n", b); // unsigned, 음수 표현 X
    printf("%lld\n", c); // long long
    printf("%I64u\n", d);
    printf("%.15f\n", e);
    printf("%.15f\n", f); // lf로 사용 가능
}