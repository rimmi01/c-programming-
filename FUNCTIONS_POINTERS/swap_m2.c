#include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a: ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter b: ");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("The value of a is %d\n", a);
//     printf("The value of b is %d\n", b);
//     return 0;
// }




/*
concept of pass by value, and pass by reference

int combination(int a, int b){
    // code
}

combination(a, b);
*/


// lets make a function that will swap the two numbers 
    void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }
    int main(){
            int a;
            printf("Enter a: ");
            scanf("%d", &a);

            int b;
            printf("Enter b: ");
            scanf("%d", &b);
            
            swap(a, b);
            
            printf("The value of a is %d\n", a);
            printf("The value of b is %d\n", b);
            return 0;
    }
