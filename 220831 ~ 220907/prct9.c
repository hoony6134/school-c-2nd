#include <stdio.h>
int main( )
{
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        if(i%2)
            for(int j=1; j<=n; j++)
                printf("%d ", (i-1)*n+j);
        else
            for(int j=1; j<=n; j++)
                printf("%d ", i*n-j+1);
                
        printf("\n");
    }
}