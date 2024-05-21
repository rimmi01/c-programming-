// calloc function 

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int *)calloc(5, 5);  // integer ko 5 bytes mein store kr rhe ham , so, it will create memory of 35 bytes 

    for(int i=0;i<5;i++)
    scanf("%d", p+i);

    for(int i=0;i<5;i++)
    printf("%d", p[i]);
}
