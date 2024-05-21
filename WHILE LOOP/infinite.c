#include<stdio.h>
int main(){
    // while('a'<'b')
    // printf("\nmalayalam is a palindrome");

    // int i = 10;
    // while (i=20)
    // printf("\nA computer buff!");

    // int i;
    // while(i=10){
    //     printf("\n%d",i);
    //     i=i+1;
    // }

    // int x = 4, y=0, z;
    // while(x>=0){
    //     x--;
    //     y++;
    //     if(x==y)
    //     continue;
    //     else
    //         printf("\n%d%d", x, y);
    // }

    int x = 4, y=0, z;
    while(x>=0){
        if(x==y)
            break;
        else
            printf("\n%d%d", x, y);
            x--;
            y++;
    }
    // return 0;
}