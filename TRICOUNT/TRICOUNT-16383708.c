#include<stdio.h>
int main()
{
    int t,i;
    unsigned long long int ans,n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
            scanf("%llu",&n);
            if(n%2==0)
    			ans = ((n*(n+2)*(2*n+1))/8);
    		else
    			ans = ((n*(n+2)*(2*n+1)-1)/8);
            printf("%llu\n",ans);
    }
    return 0;
}
