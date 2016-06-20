
#include<iostream>

using namespace std;

void merging(int a[], int l, int m, int n, int o, int sz)
	{
		int t[sz] ;
		int p = l, q = n, k = l;
		while(p<=m && q<=o)
		{
			if(a[p]>a[q])
				t[k++]=a[q++];
			else
				t[k++] = a[p++];
		}
		while(p<=m)
			t[k++] = a[p++];
		while(q<=o)
			t[k++] = a[q++];
		for(int i=l; i<=o; i++)
			a[i] = t[i];
	}
void sort(int a[], int lb, int ub, int sz)
	{
		if(lb<ub)
		{
			int mid = (lb+ub)/2;
			sort(a,lb,mid,sz);
			sort(a,mid+1,ub,sz);
			merging(a,lb,mid,mid+1,ub,sz);
		}
	}
int main()
{
        int t,n,k;
   		cin>>t;
		for(int p=0; p<t; p++)
		{
			cin>>n;
			cin>>k;
			int a[n] ;
			for(int i=0; i<n; i++)
			{
				cin>>a[i];
			}
			sort(a,0,n-1,n);
			int min = a[n-1]-a[0];
			for(int i=0; i<n-k+1; i++)
			{
				if(a[i+k-1]-a[i]<min)
					min = a[i+k-1]-a[i];
			}
            cout<<min<<"\n";
		}
    return 0;
}
