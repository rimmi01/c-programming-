// WAP to print sum of all the even digits of a given number.
#include <stdio.h>
int main()
{
    int n = 12345;
    // sum = 2+4=6  this is what we need to do
    int sum = 0;
    int lastDigit = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        if (lastDigit % 2 == 0)
        {
            sum = sum + lastDigit;
        }
            n = n / 10;
    }
    printf("The sum of even digits of the given number is: %d\n", sum);
    return 0;
}