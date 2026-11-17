#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[15];

    printf("Whats your name? \n");
    scanf("%s", &name);

if (strcmp(name, "Basil") ==0 || strcmp(name, "basil") ==0)
{
    printf("im going to eat you\n");
}
else if (strcmp(name, "Brooke") ==0 || strcmp(name, "brooke") ==0)
{
    printf ("im gonna give you a swirly\n");
}
else
{
    printf ("Hello, %s\n", &name);
}
printf("Name length: %i\n", strlen(name));
}
