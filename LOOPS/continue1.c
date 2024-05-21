#include<stdio.h>
int main(){
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    int i;
    for(int i=1;i<=100;i++)
    {
        if(i%2==0){
        continue;
        }
    printf("%d ", i);
    }
    return 0;
}