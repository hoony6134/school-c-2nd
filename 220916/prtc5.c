#include<stdio.h>
#include<conio.h>

int main(){
char yn;
while((yn=getch())!='\0'){
puts("아무 키나 누르세요.(y는 종료)");
if(yn!='y'&&yn!='Y') continue;
puts("y키를 눌렀습니다. 프로그램이 종료됩니다.");
break; 
}
}