#include<stdio.h>
void fun(){
    printf("Hello!");
}
int main(){
    void fun(); // prototype declaring  // this is called as functions prototype, and, in this, we can define the fun function anywhere in the code in the uppper of the main function as, well as, in the down side of main function as well, 
    fun(); // calling function 
    return 0;
}