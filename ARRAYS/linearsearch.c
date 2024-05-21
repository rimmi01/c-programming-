#include<stdio.h>

int search(int arr[], int size, int n){
    for(int i=0;i<size;i++){
        if(arr[i]==n)
        return i;
    }
}

int main(){
    int n;
    printf("Enter the value you want to search: ");
    scanf("%d", &n);
    int arr[]= {10, 20, 30, 40, 50};
    int size = 5;
    // int key= 30; 

    int output = search(arr, size, n);
    printf("%d", output);

    return 0;
}
