#include <stdio.h>
int main(){

    int linearSearch(int arr[], int size, int element){
        for(int i = 0; i< size; i++){
            if(arr[i] ==element){
                return i;
            }
        }
        //if -1 is returned by a funtion i.e element is not in the array;
        return -1;
    }
    
    int m_arr[] = {545,645,6,3563,634,532,54};
    int m_size = sizeof(m_arr)/ sizeof(int);
    int m_ele = 532;
    int result = linearSearch(m_arr, m_size, m_ele);
    

    if(result == -1){
        printf("Element is not available in given array\n");
    }
    else{
        printf("Element %d found at %d.\n", m_ele, linearSearch(m_arr, m_size, m_ele));
    }
    
    return 0;
}