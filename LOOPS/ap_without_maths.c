#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // We will be using an extra variable, to solve the question without using any type of maths, or, without using nth terms formula
    int a = 4;
    for(int i=1;i<=n;i++){
        printf("%d ", a);
        a = a+3;
    }
    return 0;
}