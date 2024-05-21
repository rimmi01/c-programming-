#include<stdio.h>
int combinations(int n, int r);
int factorial(int num){
    return num * factorial(num-1);
}
int combinations(int n, int r){
    return factorial(n)/(factorial(r) * factorial(n-r));
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    for(int i=0;i<=n;i++){
        int first = 1;
        for(int j=0;j<=i;j++){
            int icj = combinations(i, j);
            printf("%d", icj);
        }
        printf("\n");
    }
    return 0;
}