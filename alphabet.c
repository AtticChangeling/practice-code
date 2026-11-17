#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[21];
    printf("roll for alphabet\n");
    scanf("%s", input);
    for(int i = 0, n = strlen(input); i < n; i++)
    {
        if(input[i] > input[i + 1] && input[i + 1] != '\0')
        {
            printf("lol nope\n");
            return 1;
        }
    }
    printf("ur mom\n");
}
