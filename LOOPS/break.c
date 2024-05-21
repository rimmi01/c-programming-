// break statement 

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // for(int i=2;i<=n-1;i++){
    //     if(n%i==0){
    //         printf("The given number is composite.\n");
    //         break;
    //     }
    //     else{
    //         printf("The number is prime.\n");
    //         break;
    //     }
    // }


    int a = 0;
    for(int i=2;i<=n-1;i++){  // the condition (n-1) is very very important, just remember it
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(n==1) printf("%d is neither prime nor composite.\n", n);
    else if(a==0) printf("%d is a prime number.\n", a);
    else printf("%d is a composite number.\n", n);
    return 0;
}