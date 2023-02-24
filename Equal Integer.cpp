#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y>=x)
        {
            cout<<(y-x)<<endl;
        }
        else
        {
            int a=x-y;
            if(a%2)
            {
                cout<<(a/2)+2<<endl;
            }
            else
            {
                cout<<a/2<<endl;
            }
        }
    }

}
