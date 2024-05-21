#include<stdio.h>
int main(){
    int n=12345;
    int sum = 0;
    int lastDigit = 0;
    while(n!=0){
        lastDigit = n%10;
        sum = sum + lastDigit;  //lastDigit=5
        n = n/10;
    }
    // printf("Enter the number of which you want to find the sum of digits: ");
    // scanf("%d", &n);
    printf("The sum of digits is %d\n", sum);
    return 0;
}