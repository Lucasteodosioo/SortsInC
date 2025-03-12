#include <stdio.h>

int particiona(int arr[], int inicio, int fim)
{
    int pivo = (arr[inicio] + arr[fim] + arr[(inicio + fim) / 2]) / 3;

    while (inicio < fim){
        while (inicio < fim && arr[inicio] <= pivo)
            inicio++;
        while (inicio < fim && arr[fim] >= pivo)
            fim--;
        int t = arr[inicio];
        arr[inicio] = arr[fim];
        arr[fim] = t;
    }
    
    return inicio;
}

void quick(int arr[], int inicio, int fim)
{
    if (inicio < fim){
        int pos = particiona(arr, inicio, fim);
        quick(arr, inicio, pos - 1);
        quick(arr, pos + 1, fim);
    }
}

int main()
{
    int n; 
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    quick(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
