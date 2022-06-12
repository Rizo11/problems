#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int w, n, sum = 0;
    scanf("%d %d", &w, &n);
    getchar();

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int c = 0;
        scanf("%d", &arr[i]);
        getchar();
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum > w)
            sum -= arr[i];
    }
    printf("%d\n", sum);
    // printArray(arr, n);
    
}