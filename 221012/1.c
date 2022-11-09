#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==1){
        printf("합격");
    }
    else if (b>90&&c>50){
        printf("합격");
    }
    else{
        printf("불합격");
    }
}