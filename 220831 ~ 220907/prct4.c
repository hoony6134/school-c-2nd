#include <stdio.h>
int n, cnt, i;
int main( )
{
    scanf("%d", &n);
    
    i = 1;
    while(i<=n) // 초기식: i가 n 이하가 될 때까지 실행
    {
        if(n%i == 0) // i를 n으로 나눈 나머지가 0이면
            cnt += 1; // 카운트 1 올리기
        i++; // i에 1 더하기
    }
    printf("%d\n", cnt); // 약수의 개수 출력
}