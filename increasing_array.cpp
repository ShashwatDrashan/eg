#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) x.begin(),x.end()
#define in(x) for(auto &it : x) cin>>it;
#define out(x) for(auto it : x) cout<<it<<' ';
using namespace std;
typedef long long ll ;
int main(){
    fastio;
    ll s,ans=0,t;
    cin>>s;
    cin>>t;
    for(int i=1;i<s;i++){
        ll x;
        cin>>x;
        if (t>x){
            ans+=(t-x);
            x=t;
        }
        t=x;
    }
    cout<<ans;
    return 0;
}