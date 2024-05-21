// Bubble sort method for sorting arrays 
// time complexity of bubble sort is n^2(n square) = n * n 

#include<stdio.h>
int main(){
    int arr[] = {27, 5, 19, 2, 15, 7, 1};

    int size = sizeof(arr)/sizeof(int);

    for(int i=0;i<size-1;i++){
        for(int j=1;j<=size-1-i;j++){
            if(arr[j-1]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;

            }
        }
    }
    for(int i=0;i<size;i++)
    printf("%d ", arr[i]);
    return 0;
}
