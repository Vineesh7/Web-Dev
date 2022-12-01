#include <bits/stdc++.h>
using namespace std;
#define lli long long int
long long solve(int n,int x, vector<int> a){
    long long sum = 0;
    for(auto it:a)sum += it;
    long long low = 0,high = sum/x;
    long long ans = 0;
    long long mid;
    while(low <= high){
        mid = low + (high-low)/2;
        long long c = 0, j = 0;
        for(long long i = 0; i < n; i++){
            if(a[i] >= mid)c++;
            else {
                if(a[i] + j >= mid){
                    c++;
                    j = (a[i] + j) % mid;
                }
                else j += a[i];
            }
        }
        if(c >= x){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

int main(){
    int n=5;
    
    int x=4;
    
    vector<int> a={2,3,5,2,3};
    
    int ans;
    ans=solve(n,x,a);
    cout<<ans;
    return 0;
}