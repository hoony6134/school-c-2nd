#include <stdio.h>
int main( ){
    int input=0; int evensum=0; int oddsum=0; // evensum: 짝수합, oddsum: 홀수합
 //   scanf("%d",&input); 
    while(1){
        scanf("%d",&input);
        if (input%2==0){ // 짝수일 때 실행
            evensum+=input; // 짝수합 변수에 더하기
            printf("짝수      합계: %d\n",evensum);
        }
        else{ // 홀수일 때 실행
            if (input==-1) break; // -1 입력시 루프에서 나옴
            oddsum+=input; // 홀수합 변수에 더하기
            printf("홀수      합계: %d\n",oddsum);
        }
    }
}