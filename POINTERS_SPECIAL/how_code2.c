#include<stdio.h>
int main(){
    int num[5] = {1, 5, 9, 4, 8}, *a, *b, *c;
    a = &num[2];
    b = (num + 2);
    c = &num[4];
    if(a == b)
    printf("a and b point to the same location and the value is: %d\n", &a);
    if(a!=c)
    printf("a and c do not point to the same location is the memory");
    return 0;
}