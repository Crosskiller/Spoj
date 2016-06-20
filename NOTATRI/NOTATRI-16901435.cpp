#include<iostream>
#include<algorithm>
using namespace std;

int cmp(const void *a, const void *b) {
 return (*(int*)a-*(int*)b);
}

int binarysearch(int a[], int item, int n)
		{
			int i = 0;
			int j = n-1;
			while(i<j)
			{
				int mid = (i)+(j-i)/2;
				if(a[mid]>item)
					j = mid-1;
				else if(a[mid]<=item)
					i = mid+1;
			}
			if(a[i]>item)
				return i;
			else
				return i+1;
		}
int main()
{
    int n;
   while(true)
			{
				cin>>n ;
				if(n==0)
					break;
				int a[n] ;
				for(int i=0; i<n; i++)
                    cin>>a[i];
                qsort(a, n, sizeof(int), cmp);
                int count = 0;
				for(int i=0; i<n-2; i++)
				{
					for(int j=i+1; j<n-1; j++)
					{
						int item = a[i]+a[j];
						count+= n-binarysearch(a,item,n);
					}
				}
				cout<<count<<"\n";

			}
    return 0;
}
