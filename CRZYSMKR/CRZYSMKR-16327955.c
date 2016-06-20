#include <stdio.h>

int main(void) {
	int t,i;
    unsigned long long int n,val;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%llu",&n);
        val = (8*n)%11;
        if(val!=0)
            printf("%llu\n",11-val);
        else
            printf("0\n");
    }
	return 0;
}