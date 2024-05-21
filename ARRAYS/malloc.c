// malloc --> a function for storing dynamic memory 
// dynamin mein jo bhi space allocate karenge, woh heap memory mein space lega
// it require one parameter only 
// to store the memory to another type, then we can convert by typecasting 
// the return type of the malloc function is address of void type 
// free is the function to deallocate the memory 


// memory leakage 

# include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    int*arr =(int*)malloc(n*sizeof(int));  //pointer name we have taken as, arr, not p, and, it will work as an array as a whole 

    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}

