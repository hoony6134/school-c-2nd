#include <stdio.h>
int a, b, n;
int main( )
{
    int i;
    scanf("%d %d %d", &a, &b, &n); // 정수 세 개 입력받음
    
    long long s = 0; // s 0으로 초기화 (long long type)
    for(i=1; i<n; i++) // i가 n미만일 동안 1 더하면서
        if(i%a==0 || i%b==0) // i가 a의 배수 혹은 b의 배수이면
            s += i; // s에 i 더하기

    printf("%lld\n", s); // s 출력
}
