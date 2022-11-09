#include <stdio.h>
int main(){
    int a=1;
    int sum=0;
    while (1){
        sum+=a;
        if (a>=7){
            printf("%d",sum);
            break;
        }
        else{
            a+=2;
        }
    }
}