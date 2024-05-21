// binary search using iterative approach 

#include<stdio.h>

int binary_search(int arr[], int left, int right, int key){
    while(left<=right){
        int mid = (left + right)/2;

        if(key == arr[mid])
        return mid;

        else if(key > arr[mid])
        left = mid +1;

        else if(key<arr[mid])
        right = mid -1;
    }
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 9, 12, 14, 17, 19, 23, 25, 28, 29, 34};
    
    int size = sizeof(arr)/sizeof(int);

    int index = binary_search(arr, 0, (size-1), 29);

    if(index == -1)
    printf("Value is not present");
    else
    printf("Value is present at index %d", index);
    return 0;
}
