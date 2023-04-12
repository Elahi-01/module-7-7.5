#include<stdio.h>
#include<math.h>
int main()
{
    long long int sum=0,i;
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        

    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];

    }
    if(sum>=0)
    {
        printf("%lld\n",sum);
    }
    else 
    printf("%lld\n",sum*(-1));
}