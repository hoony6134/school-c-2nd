#include <stdio.h>
int main()
{
    int i, j;
    char s, name[5][10] = {"happy", "choco", "dodo", "minji", "chacha"}; // 2차원 배열 선언

    printf("찾고 싶은 문자를 입력하시오: ");
    scanf("%c", &s); // 찾고 싶은 문자 입력
    for (i = 0; i < 5; i++)
    {
        for (j = 0; name[i][j] != '\0'; j++) // name[i][j]가 NULL이 아닐 때까지 반복
        {
            if (name[i][j] == s) // name[i]의 j번째 인덱스가 s와 같으면
            {
                printf("%s\n", name[i]);
                break;
            }
        }
    }
}