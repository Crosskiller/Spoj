#include <stdio.h>

int main(void) {
	// your code here
	int t,i;
	unsigned long long int a,b,sum,d,f,n,j;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%llu",&a);
        scanf("%llu",&b);
        scanf("%llu",&sum);
        n = (2*sum)/(a+b);
        printf("%llu\n",n);
		d = (b-a)/(n-5);
		f = a-2*d;
		for(j=0; j<n; j++)
        {
				printf("%llu ",f);
				f=f+d;
        }
		printf("\n");;
	}
	return 0;
}