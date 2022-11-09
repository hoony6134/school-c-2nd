#include<stdio.h>
int main(){
int num[10], i;

for(i=0; i<=9; i++) 
{
    printf("숫자를 입력하세요(%d/10): ",i+1);
    scanf("%d", &num[i]);
}
i--;
printf("출력합니다: ");
for( ;i>=0; i--) printf("%d ", num[i]);
}