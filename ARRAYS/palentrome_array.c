#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int initial_variable=1;

    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    // for(int i=(n-1);i>=0;i--)
    // printf("%d ", arr[i]);

    for (int i = 0; i < (n / 2); i++)
    {
        int t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    if (arr[i]!=arr[n-i-1])
    {
        printf("\nYes!");
    }else{
        printf("\nNo!");
    }
    return 0;
}