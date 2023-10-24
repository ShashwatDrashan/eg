#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <math.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) x.begin(),x.end()
#define in(x) for(auto &it : x) cin>>it;
#define out(x) for(auto it : x) cout<<it<<' ';
#define mod 1000000007
using namespace std;
typedef long long ll ;
int main() {
    fastio;
    int n;
    cin >> n;
    int res=1;
    while(n--){
        res*=2;
        res%=mod;
    }
    cout<<res;
}
