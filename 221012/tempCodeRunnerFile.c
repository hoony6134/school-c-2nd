#include <stdio.h>
int main(){
    int x,y,a,b;
    scanf("%d %d",&x,&y);
    a=(int)(x/y);
    b=x%y;
    if (x==y*a+b){
        printf("True");
    }
    else{
        printf("False")
    }
}