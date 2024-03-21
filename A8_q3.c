#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    swap(&arr[start], &arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

int main()
{
    int n, i;
    printf("enter size of array :");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &*arr+i);
    }

    printf("Original array: \n");
    {
        for (int i = 0; i < n; i++)
            printf("%d ", *(arr+i));
        printf("\n");
    }

    reverseArray(arr, 0, n - 1);

    printf("Reversed array: \n");
    {
        for (int i = 0; i < n; i++)
            printf("%d ", *(arr+i));
        printf("\n");
    }

    return 0;
}
