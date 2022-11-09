#include <stdio.h>
int i, n;
int main( )
{
    scanf("%d", &n);
    
    for(i=2; i<n; i++) // n 미만의 1이 아닌 정수 대입
    {
        if(n%i != 0) // n이 1과 자기 자신 이외의 정수를 약수로 가지고 있지 않다면 계속
            continue;
        else
            break;
    }
    
    printf("%s\n", i==n?"prime":"composite"); // 만약 위 반복문에서 n과 i가 같아질 때까지 반복된다면 소수이고, 중간에 다른 정수를 약수로 갖고 있다면 반복문에서 나오므로 n은 i와 다른 수가 되어 합성수로 판정한다.
}