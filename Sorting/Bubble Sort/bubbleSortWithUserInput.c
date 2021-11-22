#include <stdio.h>
void printArray(int *arr, int size)
{
    // printf("Printing Array:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    // int m_arr[] = {45,67,34,76,32};
    int arr_size;
    printf("Enter the size of array you want to sort:\n");
    scanf("%d", &arr_size);
    int m_arr[arr_size];
    printf("Enter the array to sort\n");
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &m_arr[i]);
    }

    int size = sizeof(m_arr) / sizeof(int);
    printf("Printing the array you entered\n");
    printArray(m_arr, size);
    printf("After Sorting:\n");
    bubbleSort(m_arr, size);
    printArray(m_arr, size);
    return 0;
}