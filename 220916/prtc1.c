#include <stdio.h>
char c;  //int c; 
int main( ) {
    scanf("%c", &c); 
    switch(c) {
        case 'a'...'z':
            printf("소문자\n"); break;
        case '0'...'9':
            printf("숫자\n"); break;
        case 'A'...'Z':
            printf("대문자\n"); break;
        default:
            printf("알파벳 혹은 숫자(1의자리수)를 입력해주세요\n");
    }
}