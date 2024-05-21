#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int*)malloc(1000);
    
    scanf("%", p);

    p = (int*)realloc(p, n * sizeof(int));

    printf("%p", p);

    free(p);
    return 0;
}