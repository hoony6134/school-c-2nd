#include <stdio.h>
int main( ){
int i=0;
char rna[100];
printf("염기 서열을 입력해주세요: ");
scanf("%s", rna);
    
for(; rna[i]!='\0'; i++){
   if(rna[i]=='A') {
printf("[%d] ADENINE\n",i+1);
   }
   else if(rna[i]=='U') {
        printf("[%d] URACIL\n",i+1);
       }
       else if(rna[i]=='G') printf("[%d] GUANINE\n",i+1);
   else if(rna[i]=='C') { printf("[%d] CYTOSINE\n",i+1); }
   else { 
printf("[%d] %c는 잘못된 염기 표현입니다.\n", i+1, rna[i]); 
}
}
}