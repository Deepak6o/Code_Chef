#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,x,k;
        cin>>n>>x>>k;
       if(n*x>k)
       {
           cout<<(k/x)<<endl;
       }
       else
       {
           cout<<n<<endl;
       }


    }
}
