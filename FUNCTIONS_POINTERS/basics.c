// What and Why?
// y=f(x)
// y=f(x)=(x)^2 + 5
/*
To escape from repetition
to make the code more readable
*/

#include<stdio.h>
void england(){
    printf("You are in England\n");
    return;
}
void australia(){
    printf("You are in Australia\n");
    england();
    return;
}
void india(){
    printf("You are in India\n");
    australia();
    return;
}
int main(){
    india();
    return 0;
}
