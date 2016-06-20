
#include<iostream>

using namespace std;
int main()
{
        int k,l,m,n;
          cin>>k;
          cin>>l;
          cin>>m;
            for(int p=0; p<m; p++)
			{
				cin>>n;
				int memo[n+1];
				memo[0] = 0;
				for(int i=1; i<=n; i++)
				{
					int f = 0;
					if(i==0 || i==1 || i==l || i==k)
						f = 0;
					else if(i<k && i>=l)
					{
						if(memo[i-1]==0 && memo[i-l]==0)
							f = 1;
						else
							f = 0;
					}
					else if(i>=k && i<l)
					{
						if(memo[i-1]==0 && memo[i-k]==0)
							f = 1;
						else
							f = 0;
					}
					else if(i<k && i<l)
					{
						if(memo[i-1]==0)
							f = 1;
						else
							f = 0;
					}

					else
					{
						if(memo[i-1]==0 && memo[i-l]==0 && memo[i-k]==0)
							f = 1;
						else
							f = 0;
					}
					memo[i] = f;
				}
				if(memo[n] == 0 )
					cout<<"A";
				else
					cout<<"B";
			}

    return 0;
}
