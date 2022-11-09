#include <stdio.h>
int main(){
    int i, j, n;
    int list[n][n];
    printf("n을 입력하세요: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            list[i][j]=j+1+n;
            printf("%d ", list[i][j]);
        }
    }
}