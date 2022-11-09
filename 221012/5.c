#include <stdio.h>
int main(){
    int t=0;
    while (1){
        // 1시간 기다리기
        t++;
        if (t==24){
            printf("배양액 공급");
            t=0;
        }
    }
}