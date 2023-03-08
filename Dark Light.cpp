#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        if(k==0)
        {
            if(n%4==0)
            {
                cout<<"Off"<<endl;
            }
            else
            {
                cout<<"On"<<endl;
            }
        }
        else if(k==1 && n==0)
        {
            cout<<"On"<<endl;
        }
        else if(k==1 && n%4==0)
        {
            cout<<"On"<<endl;
        }
        else
        {
            cout<<"Ambiguous"<<endl;
        }

    }
}
