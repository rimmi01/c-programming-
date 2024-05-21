// remember that the functions which we have inbuilt in the library, like sqrt(), pow(), and many more, are just applicable to the perfect of those numbers which give the perfect resultant to these functions, but, if we want to write te code which is applicable on all the numbers then, we need to apply the logics further, to, just , wanna say that, these libraries don't work on each and every number, like, for, example, the sqrt() works only on perfect square numbers not any else, if, we, want it to work on all the numbers, then, we, need to apply further logics...
// pow(), used for power, like here(2, 3), means, 2 raise to the power 3 
#include<stdio.h>
#include<math.h>
// int sqrt
int main(){
    // int a;
    // printf("Enter a number: ");
    // scanf("%d", &a);

    // int root = sqrt(a);
    // printf("The square root is: %d\n", root);


    int q = pow(2, 3);
    printf("%d", q);

    return 0;
}