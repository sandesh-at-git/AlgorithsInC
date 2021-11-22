// #include<stdio.h>

// void printArray(int* A, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// void insertionSort(int *A, int n){
//     int key, j;
//     // Loop for passes
//     for (int i = 1; i <= n-1; i++)
//     {
//         key = A[i];
//         j = i-1;
//         // Loop for each pass
//         while(j>=0 && A[j] > key){
//             A[j+1] = A[j];
//             j--;
//         }
//         A[j+1] = key;
//     }
// }

// int main(){
//    // -1   0    1   2   3   4   5
//    //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
//    //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

//    //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
//    //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

//    //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
//    //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
//    //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
//    //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
//    //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

//    // Fast forwarding and 4th and 5th pass will give:
//    //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
//    //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

//    //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
//    //      07, 09, 12, 23, 54, 65| --> After the 5th pass

//     int A[] = {12, 54, 65, 7, 23, 9};
//     int n = 6;
//     printArray(A, n);
//     insertionSort(A, n);
//     printArray(A, n);
//     return 0;
// }

// #include <stdio.h>
// void printArray(int *array, int arr_size)
// {
//     printf("Printing Array:-\n[ ");
//     for (int i = 0; i < arr_size; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     printf(" ]\n");
// }
// void insertionSort(int* array, int arr_size){
//     int j, key;
//     for (int i = 1; i < arr_size; i++)
//     {
//         key = array[i];
//         j = i - 1;
//         while (j >= 0 && array[j] >= key)
//         {
//             array[j+1] = array[j];
//             j--;
//         }
//         array[j+1] = key;
//     }

// }
// int main()
// {
//     int m_arr[] = {5, 33, 11, 66, 76, 94, 45};
//     int size = sizeof(m_arr) / sizeof(int); //size calulating trick for array;
//     printArray(m_arr, size);
//     insertionSort(m_arr, size);
//     printf("After sorting:-\n");
//     printArray(m_arr, size);
//     return 0;
// }

// #include <stdio.h>
// void printArray(int* arr, int size){
//     printf("Printing Array:-\n");
//     printf("[ ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("]\n");
// }
// void insertionSort(int* arr, int size){
//     int j, key;
//     for (int i = 1; i < size; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] >= key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }

// }
// int main(){
//     int m_arr[] = {54,22,46,78,3,66,89, 55};
//     int size = sizeof(m_arr) / sizeof(int);
//     printArray(m_arr, size);
//     insertionSort(m_arr, size);
//     printf("After sorting:-\n");
//     printArray(m_arr, size);
//     return 0;
// }

// #include <stdio.h>
// void printArray(int *arr, int size)
// {
//     printf("Printing Array:-");
//     printf("[ ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf(" ]\n");
// }
// void insertionSort(int *arr, int size)
// {
//     int j, key;
//     for (int i = 0; i < size; ++i)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] >= key)
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }
// int main()
// {

//     int m_arr[] = {54, 43, 22, 21, 6, 787, 76, 44};
//     int m_size = sizeof(m_arr) / sizeof(int);
//     printArray(m_arr, m_size);
//     printf("After Sorting:-\n");
//     insertionSort(m_arr, m_size);
//     printArray(m_arr,m_size);
//     return 0;
// }

#include <stdio.h>
void printArray(int *arr, int size)
{
    printf("Printing array:-\n");
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]\n");
}
void insertionSort(int *arr, int size)
{
    int j, key;
    for (int i = 0; i < size; ++i)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] >= key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int m_arr[] = {67, 436, 3, 134, 1, 46, 34, 65, 4, 6, 352, 3, 54};
    int m_size = sizeof(m_arr) / sizeof(int);
    printArray(m_arr, m_size);
    insertionSort(m_arr, m_size);
    printf("After sorting:-\n");
    printArray(m_arr, m_size);
    // printArray(m_size, m_size);
    return 0;
}