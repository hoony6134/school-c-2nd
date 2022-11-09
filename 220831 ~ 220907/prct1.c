#include <stdio.h>
int main( )
{
    int n;

    scanf("%d", &n);  
    if(n<0) // 만약 n이 0보다 작다면
    {
        printf("minus\n"); // 음수라고 출력하기
    }
    else // 아니면 (n이 0 이상이라면)
    {
        printf("not minus\n"); // 음수가 아니라고 출력하기
    }
}