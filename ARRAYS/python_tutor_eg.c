#include<stdio.h>
#include<stdlib.h>
#include<string.h>



// ***********Using static memory ******//
// int *fun(int n)
// {
//     int a = n;
//     return &a;
// }


// int main(){
//     int *p = fun(5);
//     printf("%d", *p);
// }







//***********using dynamic memory ***********// 


// int *fun(int n)
// {
//     int *p = (int*)malloc(4);
//     *p =n;
//     return p;
// }

// int main(){
//     int *p = fun(5);
//     printf("%d", *p);
// }



///////////create one aray in a function, then, print it in the main function 

int * fun(int n)
{
    int *p = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    scanf("%d", &p[i]);

    return p;
}
int main(){
    int *p = fun(5);

    for(int i=0;i<5;i++)
    printf("%d ", p[i]);

    free(p);
}
