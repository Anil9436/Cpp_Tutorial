def linear_search(arr,n,target):

    for i in range(n):
        if(arr[i]==target):
            return i
    return -1

lis = [1,2,4,5,6,7,8]
def binarySearch(arr,n,target):
    left = 0
    right = n - 1
    while(left<=right):
        mid = left + (right-left)//2
        if(arr[mid]==target):
            return mid
        elif(arr[mid]<target):
            left = mid + 1
        else:
            right = mid - 1
    return -1

li = [1,2,3,4,5,6,7]
n = 7
target = 4
print(linear_search(li,n,target))
print(binarySearch(li,n,target))