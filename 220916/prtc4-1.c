#include <stdio.h>
int main( ){
int i = 0, num;

printf("숫자를 입력하세요: ");
scanf("%d", &num);

for( ; ; ){
printf("%d\n", i);
if(num==i) break; 
i ++;
}
}