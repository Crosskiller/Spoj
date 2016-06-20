#include<iostream>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		long long int n;
    	for(int i=0; i<t; i++)
    	{
    		long long int n;
    		cin>>n;
    		if(n==0)
    			cout<<"1"<<"\n";
    		else	if(n==1)
    			cout<<"2"<<"\n";
    		else
    		{
    			long long int sum;
    			sum = 9*n-11+(n-2)*(n-3)*2;
    			cout<<sum<<"\n";
    		}
    	}
    	return 0;
	}

