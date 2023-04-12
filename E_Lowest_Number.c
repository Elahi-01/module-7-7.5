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
    temp=arr[0];
    p=1;
    for(i=0;i<n;i++)
    {
        if(arr[i]<temp)
        {
            temp=arr[i];
            p=i;
            p++;
           
            
            
        }
       
        
    }printf("%lld %lld\n",temp,p); 
    
    
    
    
}