#include <stdio.h>
int main()
{
    int age;
    printf("당신의 나이는?\n");
    scanf("%d", &age);
    if (age >= 20)
        printf("A코스로 출발하세요.\n"); // 20 이상: A코스
    // 첫번째 조건
    else if (age >= 15)
        printf("B코스로 출발하세요.\n"); // 15 이상 20 미만: B코스
    // 첫번째가 아닐 떄 + 조건이 있을 때
    else
        // 첫번째가 아닐 때 + 조건이 없을 때
        printf("C코스로 출발하세요.\n"); // 15 미만: C코스
}