#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int head_count = 0, tail_count = 0, toss;

    srand(time(0));

    printf("Simulating 20 coin tosses...\n");

    for (int i = 0; i < 20; i++)
    {
        toss = rand() % 2;

        if (toss == 1)
        {
            head_count++;
            printf("Toss %d: Head\n", i + 1);
        }
        else
        {
            tail_count++;
            printf("Toss %d: Tail\n", i + 1);
        }
    }

    printf("\nTotal Heads: %d\n", head_count);
    printf("Total Tails: %d\n", tail_count);

    return 0;
}
