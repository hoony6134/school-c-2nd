#include <stdio.h>
char dna;
int main( )
{
    scanf("%c", &dna);
    
    if(dna=='A') // dna 입력값이 A라면
    {
        printf("ADENINE"); // 아데닌 출력
    }
    else if(dna=='T') // A가 아니고 T라면
    {
        printf("THYMINE"); // 티민 출력
    }
    else if(dna=='G') // A가 아니고 T도 아니고 G라면
    {
        printf("GUANINE"); // 구아닌 출력
    }
    else if(dna=='C') // A가 아니고 T도, C도 아니고 C라면
    {
        printf("CYTOSINE"); // 사이토신 출력
    }
}