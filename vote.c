#include <stdio.h>

typedef struct
{
    char name[21];
    int votes;
} runner;

runner getcan(void);

int main(void)
{
    int n;
    printf("how many candidates are there?\n");
    scanf("%i", &n);

    runner candidates[n];
    if(n == 1) {
        candidates [0] = getcan();
    } else if(n > 1) {
        for(int i = 0; i < n; i++)
        {
            candidates [i] = getcan();
        }
    } else {
        printf("Please input a positive integer\n");
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%s has %i votes.\n", candidates[i].name, candidates[i].votes);
    }
}
runner getcan(void)
{
    runner i;
    printf("name: ");
    scanf("%s", i.name);
    printf("votes: ");
    scanf("%i", &i.votes);
    return i;
}
