#include <stdio.h>

int factorial(int n);

int main(void)
{
    int base;
    printf("input a number: ");
    scanf("%i", &base);
    int output = factorial(base);
    printf("the factorial of %i is %i\n", base, output);
}

int factorial(int n)
{
    int m = n;
    for(int i = 1; i < n; i++)
    {
        m = m * i;
    }
    return m;
}
