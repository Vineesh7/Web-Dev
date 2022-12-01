#include <bits/stdc++.h>
using namespace std;
#define lli long long int


int main(){
    int N,M,c=0;
    cin>>N>>M;
    int arr[M],ans[M];
    for(int i=0;i<M;i++)
    {
        cin>>arr[i];
    }
    ans[0]==arr[0];
    for(int i=1;i<M;i++)
    {
        if(arr[i]-arr[i-1]==0)
        {
            c++;
            if(c>N) 
            ans[i]=arr[i]+(c-N);
        }
        else
        {
            c=0;
            ans[i]=arr[i];
        }
    }
    for(int i=0;i<M;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}