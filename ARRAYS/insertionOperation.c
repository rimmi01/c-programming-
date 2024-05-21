// insertion and deletion operations 
#include<stdio.h>

void insert(int arr[], int* size, int idx, int key)    // pass by address, the array address is passed like int arr[]
{
    if(idx>=(*size) && idx<0)
    return;
    (*size)++;   // now the size of array is 11 
    // arr[i]=arr[i-1];     just for understanding 
    for(int i=*size-1;i>idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=key;
}
int main(){
    int arr[1000] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10; // indexing is from 0 to 9 
    // insertion means, we aren't overridding the value, but, we will shift the values if me want to insert in the array, and indexing would be increasing by 1 
    insert(arr, & size, 3, 23);        // arrayname, addres, index number, value we want to insert   // user declared variable named insert 
    insert(arr, &size, 0, 36);
    insert(arr, &size, 7, 45);
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}