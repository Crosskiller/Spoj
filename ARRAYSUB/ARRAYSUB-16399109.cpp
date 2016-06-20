#include <iostream>
using namespace std;

int main() {
	
	// your code here
		int n,k;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		cin>>k;
		for(int i=0; i<=n-k; i++)
		{
			int max = 0;
			for(int j=i; j<k+i; j++)
			{
				if(a[j]>max)
					max = a[j];
			}
			cout<<max<<" ";
		}
	return 0;
}