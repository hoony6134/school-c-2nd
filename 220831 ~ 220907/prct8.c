#include <stdio.h>
int n;
int main( )
{
    int i; int j;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d ", j);

        printf("\n");
    }
}