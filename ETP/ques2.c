#include<stdio.h>
double sumOfSeries(int n){
    double sum = 0.0;
    if(n==1){
        return 1;
    }
    else{
        for(int i=1;i<=n;i++){
            sum = sum + (1.0/i);
        }
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    double result = sumOfSeries(n);
    printf("%.2f", result);
    return 0;
}