#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 65;
    int *p = &a;
    // char *c = p;   // this not possible, as, the int address can't be stored as a char address, 
    char *c = (char *)p;  // but, we, can do, this as, if the return type of p is int, then, we, are changing it to char type, using, (char *), which is possible 

    printf("%c %c %c %c", c[0], c[1], c[2], c[3]);
}