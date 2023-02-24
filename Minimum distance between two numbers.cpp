#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cin>>n;
    int arr[n]={1,2,3,4,5,6,7,8,9};
    int x,y;
    cin>>x>>y;
    if(x<n && y<n)
    {
        sum=arr[x]-arr[y];
        cout<<sum;
    }
}
