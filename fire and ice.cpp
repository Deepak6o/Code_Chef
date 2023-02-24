#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c1=0,c2=0,max=0,lp=0,lead=0;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        c1+=a;
        c2+=b;

        if(c1>c2)
        {
            lead=c1-c2;
            if(lead>max)
            {
                max=lead;
                lp=1;
            }
        }
        else
        {
            lead=c2-c1;
            if(lead>max)
            {
                max=lead;
                lp=2;
            }
        }
    }
    cout<<lp<<" "<<max;
    return 0;
}
