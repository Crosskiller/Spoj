#include<iostream>
#include<math.h>
using namespace std;
int horner(int poly[], int n, int x)
{
    int result = poly[0];
    for (int i=1; i<n; i++)
        result = result*x + poly[i];

    return result;
}
int main()
{
    int n,k,cnt=1;
      while(1)
      {
        cin>>n;
        if(n==-1)
            break;
        int a[n+1];
        for(int i=0; i<=n; i++)
            cin>>a[i];
        cin>>k;
        cout<<"Case "<<cnt<<":"<<"\n";
        for(int i=0; i<k; i++)
        {
            int val;
            cin>>val;
            int sum = horner(a,n+1,val);
            cout<<sum<<"\n";
        }
        cnt++;
      }

    return 0;
}
