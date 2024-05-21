// Write a code to calculate the length of the number entered...
#include <stdio.h>
// int main()
// {
    // int n;
    // int count = 0;
    // printf("Enter a digit of any length: ");
    // scanf("%d", &n);
    // while (n != 0)
    //     if (n != 0){
    //         n = n / 10;
    //         count++;
    //         printf("The length of the number entered is: %d\n", count);
    //         break;
    //     } else if(n==0){
    //         printf("The length of the number is 1");
    //     } else{
    //         printf("The number you have entered is negative");
    //     }
//         return 0;
// }









int main() {
    int n;
    int count = 0;
    
    printf("Enter a digit of any length: ");
    scanf("%d", &n);
    
    while (n != 0) {
        n = n / 10;
        count++;
    }
    printf("The length of the number entered is: %d\n", count);
    return 0;

}
