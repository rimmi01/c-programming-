#include<stdio.h>
int main(){
    int marks[10] = {94, 83, 34, 33, 45, 65, 34, 94, 23, 100};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d ", i);
        }
    }
    return 0;
}