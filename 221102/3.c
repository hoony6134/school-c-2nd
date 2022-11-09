#include <stdio.h>
int main()
{
    int i, j;
    char name[5][10] = {"happy", "choco", "dodo", "minji", "chacha"};

    puts("이름 출력하기");
    // printf("%c",name[2][3]);

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(name[i][j] == '\0')
                break;
            printf("%c", name[i][j]);
        }
        printf("\n");
    }
}