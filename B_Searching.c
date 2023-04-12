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
    scanf("%lld",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("%lld\n",i);
    }
    else
    printf("-1\n");
    
}