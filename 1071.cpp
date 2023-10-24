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
//this is simple if u think this as a ap or what ever this is called like this matrix's center elements are 1 3 7 13 21 and if u subtract 1 and divide by 2 u get a sum of n elements formula n*(n-1) using this we can create a easy answer 
int main(){
    fastio;
    int q=3;
    cin>>q;
    while(q--){
        ll x,y,r,c,z;
        cin>>x>>y;
        if(x>y){
            r=x-y;
            z=x;
            c=1;
        }
        else{
            z=y;
            r=y-x;
            c=-1;
        }
        cout<<((z*(z-1)+1)-(z&1)*(r)*c+(!(z&1)*r)*c)<<endl;
    }
    return 0;
}