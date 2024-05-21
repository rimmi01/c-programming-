#include<stdio.h>
void fibonacci(int a, int b, int n)
{
    if(n==1)
    printf("%d", a);
    else
    {
        int c = a+b;
        printf("%d ", a);
        fibonacci(b, c, n-1);
    }

}
int main(){
    int a=0, b=1;
    int n;
    scanf("%d", &n);

    fibonacci(a, b, n);
    
    return 0;
}


