// solid rectangle 
#include<stdio.h>
int main(){
    // printf("*****\n*****\n*****");
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns: ");
    scanf("%d", &m);
    for(int i=1;i<=n;i++){  // outer loop---> no. of lines 
        for(int i=1;i<=m;i++){ // inner loop---> no. of stars in each line 
            printf("*");
        }
        printf("\n"); // har line ke baad ek enter maarne ke liye hai 
    }
    return 0;
}