#include<stdio.h>
int main(){
    int N = 4;
    int *ptr;
    ptr = &N;
    printf("Pointer before Substraction: ");
    printf("%p \n", ptr);
    ptr = ptr-5;
    printf("Pointer after Substraction: ");
    printf("%p \n", ptr);
    return 0;
}