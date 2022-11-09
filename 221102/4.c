#include <stdio.h>
int main()
{
    int x, y;
    char name[5][10] = {"happy", "choco", "dodo", "minji", "chacha"}; // 2차원 배열 선언

    printf("가로(행), 세로(열)을 입력하세요: ");
    scanf("%d %d", &x, &y); // 가로, 세로 입력 

    printf("name[%d][%d]는 %s 문자열의 %c입니다.\n", x, y, name[x], name[x][y]); // name[x][y]는 name[x]의 y번째 index의 문자를 의미
}