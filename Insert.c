#include <stdio.h>

void insert(int arr[], int n)
{
    int i, j, t;

    for (i = 1; i < n; i++)
    {
        j = i;
        t = arr[j];
        while (j > 0 && t < arr[j - 1])
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = t;
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
    
    insert(arr, n);

    return 0;
}
