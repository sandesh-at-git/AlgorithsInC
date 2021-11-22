// #include <stdio.h>
// int main()
// {
//     // funciton for swapping passed array indexes
//     void swap(int *a, int *b)
//     {
//         int temp;
//         temp = *a;
//         *a = *b;
//         *b = temp;
//     }

//     void bubbleSort(int arr[], int n)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = 0; j < n - i - 1; j++)
//             {
//                 if (arr[j] > arr[j + 1])
//                 {
//                     swap(&arr[j], &arr[j + 1]);
//                 }
//             }
//         }
//     }
//     //checking if swap function is working or not
//     // int m = 10, n = 20;
//     // printf("m = %d\n", m);
//     // printf("n = %d\n", n);
//     // swap(&m, &n);
//     int m_arr[] = {43, 56, 4, 90, 10, 22};
//     int size = sizeof(m_arr) / sizeof(int);
//     bubbleSort(m_arr, size);
//     printf("printing array\n");
//     for (int k = 0; k < size; k++)
//     {
//         printf("%d\n", m_arr[k]);
//     }

//     return 0;
// }

#include <stdio.h>
void printArray(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int* n1,int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
   *n2 = temp;
}
void bubbleSort(int* arr, int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){

    int a[] = {34,11,56,31,95,67,54};
    int size = sizeof(a) / sizeof(int);
    printf("Array before swaping\n");
    printArray(a, size);
    printf("Array after swapping\n");
    bubbleSort(a,size);
    printArray(a, size);
    return 0;
}
