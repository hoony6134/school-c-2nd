#include <stdio.h>
int i, n;
int main( )
{
    scanf("%d", &n);
    
    i = 2;
    do
    {
        if(n%i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
        else
            i++;
    }while(i<=n);
    
    printf("\n");
}
