#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 0;
    printf("what number would thee like maddam?\n");
    scanf("%i", &n);
    for (int i = 0; 10 > i; i++)
    {
        if (numbers[i] == n)
        {
            printf("number found my liege\n");
            return 0;
        }
    }
    printf("my liege a theft has been commited thy number is absent from thy vault\n");
    return 1;
}
