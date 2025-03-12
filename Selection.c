#include <stdio.h>

void selection(int arr[], int n)
{
    int i, j, t, menor;

    for (i = 0; i < n; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[menor])
                menor = j;
        
        t = arr[i];
        arr[i] = arr[menor];
        arr[menor] = t;    
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

    selection(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
