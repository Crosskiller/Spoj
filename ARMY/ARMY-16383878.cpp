#include<iostream>
using namespace std;
int main()
{
    int t,i,a,b;
    cin>>t;
    for(i=0; i<t; i++)
    {
            cin>>a;
            cin>>b;
            int arr1[a];
            int arr2[b];
            for(int j=0; j<a; j++)
                cin>>arr1[j];
            for(int j=0; j<b; j++)
                cin>>arr2[j];
            int sum1=0,sum2=0;
            while(a!=0 && b!=0)
    		{
    			if(arr1[a-1]>=arr2[b-1])
    			{
    				sum1++;
    				b--;
    			}
    			else
    			{
    				sum2++;
    				a--;
    			}
    		}
    		if(sum1>sum2)
    			cout<<"Godzilla"<<"\n";
    		else
    			cout<<"MechaGodzilla"<<"\n";
    }
    return 0;
}
