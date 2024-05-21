#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int*)malloc(0);
    printf("%s", ptr == NULL ? "NUll" : "Not Null");
    free(ptr);
    return 0;
}
