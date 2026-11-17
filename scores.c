#include <stdio.h>

float average(int length, int array[]);

int main (void)
{
    const int N = 3;
    int scores[N];
    for(int i = 0; i < N; i++)
    {
        scores[i];
        printf("score %i:\n", i + 1);
        scanf("%i", &scores[i]);
    }
    printf("Average score %f\n", average(N, scores));
}

float average(int length, int array[])
{
    float sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / length;
}
