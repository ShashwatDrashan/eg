#include<iostream>
#include<cstdio>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) x.begin(),x.end()
#define in(x) for(auto &it : x) cin>>it;
#define out(x) for(auto it : x) cout<<it<<' ';
using namespace std;
typedef long long ll ;
int main(){
    fastio;
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        a[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=1){
            cout<<i<<" ";
        }
    }
    return 0;
}