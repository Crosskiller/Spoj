#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        double a,b,c,d,s,ans,ans1;
        cin>>a>>b>>c>>d;
        s = (a+b+c+d)/2.0;
        ans = sqrt((s-a)*(s-b)*(s-c)*(s-d))*100;
        ans1 = round(ans)/100.0;
        printf("%.2f\n",ans1);
    }
    return 0;
}
