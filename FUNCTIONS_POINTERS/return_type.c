#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    int sum = add(a, b);  // ehe add naam da function upper bnaya ga, ta ki ethe directly use kr sakiye, functions da naam likh ke sidha argument paas kr ke, us nu use kr sakde aan, te je changes karne aa taan directly upper defined functions ch kr sakde aan.
    printf("%d\n", sum);
    return 0;
}