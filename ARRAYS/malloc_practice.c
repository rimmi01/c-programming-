#include<stdio.h>
#include<stdlib.h>

int main(){
    float n;
    scanf("%f", &n);
    float*arr = (float*)malloc(n*sizeof(float));

    for(int i=0;i<n;i++){
        scanf("%f", &arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%f", arr[i]);
    }
}
