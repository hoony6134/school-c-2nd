#include <stdio.h>
int main( )
{                               //  8 4 2 1          8 4 2 1
    printf("%d ", 10&7); // 10 비트: 1 0 1 0 , 7 비트: 0 1 1 1 둘다 1인게 2밖에 없음
    printf("%d ", 10|7); // OR: 8+4+2+1=15
    printf("%d ", 10^7); // eXclusive OR (XOR): 다른 곳 8+4+1=13
    printf("%d ", ~10); //
    printf("%d ", 2<<3); // 
    printf("%d ", 15>>2); // 
}