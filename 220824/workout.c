#include <stdio.h>
void main(){
    int pw=5010; // 초기 패스워드 설정
    int input;
    printf("비밀번호를 입력하세요: "); // 비밀번호 입력 문구
    scanf("%d",&input); // 비밀번호 입력 받아서 input 변수에 정수형으로 저장
    if (pw==input) { // 만약 입력값과 초기 패스워드가 같으면
        printf("접속 가능"); // 접속 가능 출력
    }
    else{ // 만약 입력값과 초기 패스워드가 다르면
        printf("접속 실패\n비밀번호를 잘못 입력하셨습니다."); // 접속 실패 출력
    }
}