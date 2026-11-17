#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[21];
    printf("roll for alphabet\n");
    scanf("%s", input);
    for(int i = 0, n = strlen(input); i < n; n--)
    {
        if(input[i] > input[i + 1])
        {
            printf("lol nope\n");
            return 0;
        }
    }
    printf("ur mom\n");
}
