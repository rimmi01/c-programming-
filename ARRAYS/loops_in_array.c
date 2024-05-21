#include<stdio.h>
int main(){
    int arr[5];
    
    for(int i=0;i<=4;i++){
        int a = i+1;
        printf("Enter element number: %d\n", a);
        scanf("%d", &arr[i]);
    }
    // printf("%d", arr[1]);

    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }

    // printf("%d", arr[-1]);
    return 0;
}


// Note printing output, and taking input in arrays, we, will do it using loops, to ease in the writing of the code, and, to escape from the loops. 
