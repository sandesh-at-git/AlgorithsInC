// #include <stdio.h>
// int main(){

//     int binarySearch(int arr[], int size, int element){
//         int low, mid, high;
//         low = 0;
//         high = size -1;
//         while(low <= high){
//             mid = (low + high) / 2;
//             if(arr[mid]== element){
//                 return mid;
//             }
//             else if(arr[mid] < element){
//                 low = mid + 1;
//             }
//             else{
//                 high = mid - 1;
//             }
//         }
//         return -1;

//     }
//     int m_arr[] = {32,55,77,88,111,244,355};
//     int m_size = sizeof(m_arr) / sizeof(int);
//     int m_ele = 244;
//     int res = binarySearch(m_arr, m_size, m_ele);
//     int printResult(){
//         if(res == -1){
//             printf("Could not found element in given array.\n");

//         }
//         else{
//             printf("Element found at %d index.\n", res);
//         }
//     }
//     printResult();
//     return 0;
// }

#include <stdio.h>
int main()
{

    int binarySearch(int arr[], int size, int element)
    {
        int low, mid, high;
        while (low <= high)
        {
            if (arr[mid] == element)
            {
                return mid;
            }
            else if (arr[mid] < element)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }
}