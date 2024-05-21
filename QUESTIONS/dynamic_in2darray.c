/// Dynamic allocation in 2d array, 
// #include<stdio.h>
// #include<stdlib.h>
// int  main(){
//     int arr[2][2] = {1, 2, 3, 4};

//     printf("%d", **arr)  // here name of array , arr is working as a pointer
// }




#include<stdio.h>
#include<stdlib.h>
int main(){
    int **arr = (int**)malloc(10*sizeof(int*));  // one address takes 8 bytes of memory to be stored,
    for(int i=0;i<5;i++){
        *(arr+i) = (int*)malloc(4*sizeof(int));
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
