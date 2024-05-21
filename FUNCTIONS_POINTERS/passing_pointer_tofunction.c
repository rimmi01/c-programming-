// call by reference concept is used in passing the pointer to a function 




////******** Call by value ***********//
// #include<stdio.h>

// void  main(){
//     int a, b, sum;
//     int add(int, int);
//     printf("enter first value: ");
//     scanf("%d", &a);
//     printf("enter second value: ");
//     scanf("%d", &b);
//     sum = add(a, b);
// }
// int add(int x, int y)
// {
//     int z;
//     z = x + y;
//     printf("addition = %d", z);
//     return z;
// }





//// ***********Call by reference ******//

#include<stdio.h>
void main(){
    int a, b, sum;
    int add(int *, int *);
    printf("enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    sum = add(&a, &b);
}

int add(int *x, int *y)
{
    int z;
    z = *x + *y;
    printf("Additon: %d", z);
    return z;
}