#include <stdio.h>
void main(){
    int pw=5010;
    int input;
    printf("비밀번호를 입력하세요: ");
    scanf("%d",&input);
    if (pw==input) {
        printf("접속 가능");
    }
    else{
        printf("접속 실패\n비밀번호를 잘못 입력하셨습니다.");
    }
}