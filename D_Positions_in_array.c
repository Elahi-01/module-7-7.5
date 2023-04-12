#include<stdio.h>
#include<math.h>
int main()
{
    long long int search,found=0,i;
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=10)
        {
            printf("A[%lld] = %lld\n",i,arr[i]);
        }
    }
    
    
    
}