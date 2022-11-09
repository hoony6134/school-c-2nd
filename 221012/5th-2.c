#include<stdio.h>
int main(){
int num[20]={3,}, i, snum, n;
char yn;

printf("학생 수를 입력하세요: ");
scanf("%d", &n); 

while(1){
printf("과제를 제출한 학생의 번호: ");
scanf("%d", &snum);
getchar();
if(num[snum]==1) {
puts("이미 체크되어 있습니다.");
}
else num[snum]=1;

printf("입력을 계속 하시겠습니까?(y/n): ");
scanf("%c", &yn);
if(yn=='n') break;
else if(yn!='y') {
puts("소문자 y나 n을 입력해주세요!");
continue;
}
}
printf("%d반 과제 제출하지 않은 학생: ", num[0]);
for(i=1; i<=n; i++){
if(num[i]==0) printf("%d ", i); 
}
}