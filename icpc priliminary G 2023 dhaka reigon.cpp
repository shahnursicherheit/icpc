#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int c=1;c<=t;c++)
    {
        string s;
        cin>>s;
        int t_b=s.length(),w=0,r=0,b=0;
        int o;
        for(int j=0;j<t_b;j++)
        {
            if(s[j]=='W')
            {
                w++;
            }
            else
            {
                int n=0;
                n=(int)s[j];
                r+=n-48;
            }
        }
        o=t_b/6;
        b=t_b%6;
        if((float)t_b/6>1)
        {
            cout<<o<<"."<<b<<" Overs ";
        }
        else
            cout<<o<<"."<<b<<" Over ";
        if(r>1)
        {
            cout<<r<<" Runs ";
        }
        else
            cout<<r<<" Run ";
        if(w>1)
        {
            cout<<w<<" Wickets."<<endl;
        }
        else
            cout<<w<<" Wicket."<<endl;
    }


    return 0;
}
