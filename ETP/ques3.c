#include<stdio.h>
int sumOfSeries(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + ((2*i)-1);
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    int result = sumOfSeries(n);
    printf("%d", result);
    return 0;
}