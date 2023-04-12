#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,temp,p;
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%lld ",arr[i]);
    }
     
    
    
    
    
}