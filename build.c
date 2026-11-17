#include <stdio.h>

void build(int n);
int main(void)
{
    int height;
    printf("height: \n");
    scanf("%i", &height);
    build(height);
}

void build(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
