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
    ll a;
    cin>>a;
    cout<<a<<" ";
    while(a!=1){
        if(a&1){
            a=a*3+1;
        }
        else{
            a/=2;
        }
        cout<<a<<" ";
    }
    return 0;
}