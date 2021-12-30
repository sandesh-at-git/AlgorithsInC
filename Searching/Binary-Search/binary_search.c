#include <stdio.h>
int main()
{

	int binarySearch(int arr[], int size, int element)
	{
		int low, mid, high;
		low = 0;
		high = size - 1;
		while (low <= high)
		{
			mid = (low + high) / 2;
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
	int s_arr[] = {4, 6, 7, 9, 32, 76, 333, 424};
	int a_size = sizeof(s_arr) / sizeof(int);
	int ele = 424;
	int search = binarySearch(s_arr, a_size, ele);
	printf("%d is at %d index\n", ele, search);
	return 0;
}
