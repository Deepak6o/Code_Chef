#include<bits/stdc++.h>
using namespace std;
double median(int arr[],int n,int d)
{

    sort(arr,arr+d);
    if(d%2!=0)
    {
        return (double)arr[((d+2)/2)-1];
    }
    else
    {
        return (double)(arr[((d+1)/2)-1]+arr[((d+3)/2)-1])/2;
    }

}
int notification(int arr[],int n,int d)
{
    int c=0;
    int med=median(arr,n,d);
    if(n>d)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<i+d; j++)
            {
                if(arr[i+d+1]>=2*med)
                {
                    c++;
                }
            }
        }
        return c;
    }
    return NULL;
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Ans = "<<notification(arr,n,d);
}
