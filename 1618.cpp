
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
    int n;cin>>n;
    int res=0;
    for (int i=5;i<=n;i*=5){
        res+=(n/i);
    }
    cout<<res;
    return 0;
}