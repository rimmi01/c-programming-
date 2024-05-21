#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    int freq[10] = {0};

    while (n1 != 0)
    {
        int r = n1 % 10;
        freq[r]++;
        n1 = n1 / 10;
    }
    while (n2 != 0)
    {
        int r = n2 % 10;
        freq[r]--;
        n2 = n2 / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] != 0)
        {
            printf("numbers are not anagrams");
            return 0;
        }
    }

    printf("numbers are anagrams");
}