// %s for strings, and it starts reading the memory from first address and till the occurence of the array 
// realloc function for reallocation of memory 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *s = (char*)malloc(1000);

    scanf("%[^\n]", s); // s is the base address, from where we are storing the string, 
    // s++;  //if we are using, s++ then, we, can't use const in the string array declaration, as, agar hamne usko const kar diya, toh, ham s ko change nhi kr sakte then 


    s = (char *)realloc(s, strlen(s));


    printf("%s", s);  // the %s will read till the first occurence of white space character, 

    free(s);
    // return 0;
}
