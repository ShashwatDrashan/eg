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
    string a;
    cin>>a;
    int x=a.size(),sav=0,m=0;
    char c=a[0];
    for (int i=0;i<x;i++){
        if (a[i]==c){
            m+=1;
        }
        else {
            sav=max(sav,m);
            m=1;
            c=a[i];
        }
    }
    sav=max(sav,m);
    cout<<sav<<endl;
    return 0;
}