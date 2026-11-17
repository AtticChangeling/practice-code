#include <stdio.h>
#include <string.h>

int main(void)
{
   char input[20];
   printf("Input: ");
   scanf("%s", input);
   for(int i = 0, stri = strlen(input); i < stri; i++)
    {
        printf("%c", input[i]);
    }
    printf("\n");
}
