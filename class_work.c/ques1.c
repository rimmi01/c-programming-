#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i=i+1){
        scanf("%d", arr + i);
    }

    int k;
    scanf("%d", &k);

    /*i=0
    j=i+1
    k=j+1
    */
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int m=j+1;m<n;m++)
            {
                if(arr[i]+arr[j]+arr[m]==k)
                printf("%d%d%d\n",arr[i], arr[j], arr[m]);
            }
        }
    }
    return 0;
}