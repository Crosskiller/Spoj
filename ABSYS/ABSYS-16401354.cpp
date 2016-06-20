#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
        int t;
        cin>>t;
        for(int i=0; i<t; i++)
        {
            string s1,s2,s3,s4,s5;
            cin>>s1;
            cin>>s2;
            cin>>s3;
            cin>>s4;
            cin>>s5;
            string s = "machula";
            if(s1.find(s) != std::string::npos)
            {
                int a,b,c;
                stringstream(s3)>>a;
                stringstream(s5)>>b;

                c= b-a;
                cout<<c<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<"\n";
            }
            else if(s3.find(s) != std::string::npos)
            {
                int a,b,c;
                stringstream(s1)>>a;
                stringstream(s5)>>b;

                c= b-a;
                cout<<s1<<" "<<s2<<" "<<c<<" "<<s4<<" "<<s5<<"\n";
            }
            else if(s5.find(s) != std::string::npos)
            {
                int a,b,c;
                stringstream(s1)>>a;
                stringstream(s3)>>b;

                c= b+a;
                cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<c<<"\n";
            }
            else
            {
                cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<"\n";
            }

        }
        return 0;
}
