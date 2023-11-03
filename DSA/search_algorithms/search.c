#include<stdio.h>

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}
int binarySearch(int arr[], int n, int target)
{
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}


int main()
{
    int arr[] = {1, 2, 3, 7, 32, 111};
    int target = 32;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("LinearSearch : %d\n", linearSearch(arr, n, target));
    printf("BinarySearch : %d", binarySearch(arr, n, target));
}