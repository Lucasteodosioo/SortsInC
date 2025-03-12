#include <stdio.h>

void bubble(int arr[], int n)
{
    int i, t;
    int troca = 1;
    while(troca)
    {
        troca = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
                troca = 1;
            }
        }
        n--;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble(arr, n);
    
    
    return 0;
}
