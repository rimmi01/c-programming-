#include<stdio.h>

int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact * 1;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    int nfact=factorial(n); // n!
    int rfact=factorial(r); // r!
    int nrfact=factorial(n-r); // (n-r)!
    // for(int i=2;i<=n;i++){
    //     nfact = nfact*i;
    // }
    // for(int i=2;i<=r;i++){
    //     rfact = rfact*i;
    // }
    // for(int i=2;i<=)

    int ncr = nfact/(rfact*nrfact);
    return 0;
}
// int combination(int n, int r){
        
//     }