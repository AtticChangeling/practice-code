#include <stdio.h>

int recfac(int n);
int main(void)
{
    int m;
    printf("inpput: ");
    scanf("%i", &m);
    printf("facotrial of %i is %i\n", m, recfac(m));
}

int recfac(int n)
{
    if(n == 1)
    {
        return 1;
    } else {
        return n * recfac(n - 1);
    }
}
