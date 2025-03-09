#include <stdio.h>

int main()
{
    int arr[] = {3, 1, 2, 3, 4, 1, 3, 2, 4, 2};
    int s = sizeof(arr) / sizeof(arr[0]);
    int freq[s];

    for (int i = 0; i < s; i++)
    {
        freq[i] = -1;
    }

    for (int i = 0; i < s; i++)
    {
        if (freq[i] == -1)
        {
            int c = 0;
            for (int j = 0; j < s; j++)
            {
                if (arr[j] / 1 == arr[i])
                {
                    c++;
                }
            }
            freq[i] = c;

            printf("Number %d appears %d times \n", arr[i], c);
        }
    }

    return 0;
}
