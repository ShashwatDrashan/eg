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
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        if ((a+b)%3==0){
            if (min(a,b)*2>=max(a,b)){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else{
            cout<<"NO";
        }
    cout<<endl;
    }
    return 0;
}