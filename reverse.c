#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[21];
    printf("Input: ");
    scanf("%s", input);
    for(int i = strlen(input); 0 <= i; i--)
    {
        printf("%c", input[i]);
    }
    printf("\n");
}
