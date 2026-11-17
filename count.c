#include <stdio.h>

int main(void)
{
    int n;
    printf("How high should the vampire count?\n");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%i ah ah\n", i);
    }
}