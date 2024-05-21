#include<stdio.h>
void add(int* ptr){
    (*ptr)++;
}
int main(){
    int* p, i = 12;
    printf("%d", *p);
    p = &i;
    add(p);
    printf("%d", *p);
    return 0;
}


// how the output is 13 ??

