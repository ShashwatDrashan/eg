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
    vector <int> a(1e6);
    int t;
    cin>>t;
    if (t<4 && t!=1) cout<<"NO SOLUTION";
    else{
        for(int i=2;i<=t;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<=t;i+=2){
            cout<<i<<" ";
        }
    } 
    return 0;
}