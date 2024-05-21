#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;


scanf("%d %d", &rows, &cols);
int * arr = (int *) malloc(rows * cols*sizeof(int));
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        scanf("%d", &arr[i*cols+j]);
    }
}
//     // Input the number of rows and columns
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);

//     // Allocate memory for the 2D array
//     int *arr = (int *)malloc(rows * cols * sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed.");
//         return 1;
//     }

//     // Input elements
//     printf("Enter the elements:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &arr[i * cols + j]);
//         }
//     }

//     // Output elements
//     printf("The 2D array is:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i * cols + j]);
//         }
//         printf("\n");
//     }

//     // Free memory
//     free(arr);

    return 0;
}



