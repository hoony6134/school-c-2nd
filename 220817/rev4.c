#include <stdio.h>
int main( )
{
    int x=2, y=3;
    printf("%d\n", ((x++)*(y++))%10);
    printf("%d\n", (x*y)%10);
}