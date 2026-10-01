#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, sum = 0;

    printf("===== Dynamic Array Using calloc() =====\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of elements!\n");
        return 1;
    }

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nArray elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nSum = %d\n", sum);

    free(arr);

    printf("Memory released successfully.\n");

    return 0;
}
