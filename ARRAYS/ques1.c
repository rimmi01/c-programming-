//  when we are using double pointer then the values of the arr can be derefrenced by adding ** to the element location in the print statement
#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;
    
    *p++;  // value ko increment karke nahi aayega, ++ pehle chalega, then, * chalega , but if we want to increment first, then, we can use, (*p)++; then, it, will increment the value first 
    printf("%d\n", *p);

    // arr++;         //////  this will give error, as, we can't change the base address of an array 
    printf("%d", *p);


    // int *p[5] = {arr, arr+1, arr+2, arr+3, arr+4};


    // int **r[5]={p, p+1, p+2, p+3, p+4};

    // printf("%d\n", *(*(*(r+2)+1)+1));  // same as, r[2][1][1] same result 


    // printf("%p\n", *p);
    // printf("%p\n", *(p+1));
    // printf("%d\n", *(*(p+1)+2));
    // printf("%d\n", *(p[2]+1));
    // printf("%d", r[2][1][1]);


    
    return 0;
}


