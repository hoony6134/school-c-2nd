#include <stdio.h>
int s; // 전역변수 초기값 지정하지 않으면, 0으로 초기화
int main( )
{
    scanf("%d", &s); // 1~12월 입력 가능
    
    switch(s) // 조건을 처음(1번)에만 검사
              // break가 없을 경우 조건에 상관 없이 아래 처리할 문장을 모두 실행함
              // 아래와 같이 case x: case y: 가능하게 함
    {
        case 12: case 1: case 2:
            printf("winter\n"); break;
        case 3: case 4: case 5:
            printf("spring\n"); break;
        case 6: case 7: case 8:
            printf("summer\n"); break;
        default:
            printf("fall\n"); // break 써도 안써도 상관 없음
    }
}