#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) x.begin(),x.end()
#define en <<"\n"
#define in(x) for(auto &it : x) cin>>it;
#define out(x) for(auto it : x) cout<<it<<' ';
using namespace std;
typedef long long ll ;//1 2 3 4 5 6 7
int main(){
    fastio;
    int n;cin>>n;
    if ((n*(n+1)/2)%2==0){

        if ( n&1 ){
            cout<<"YES" en<<n/2+1 en;
            for (int i=1;i<=(n/4)+1;i++){
                cout<<i<< " "<<(n)-i<<" ";
            }
            cout en<<n/2 en;
            for(int i=(n/4)+2;i<n-i;i++){
                cout<<i<< " "<<(n)-i<<" ";
            }
            cout<<n en;
        }
        else{
            cout<<"YES" en<<n/2 en;
            for (int i=1;i<=(n/4);i++){
                cout<<i<< " "<<(n+1-i)<<" ";
            }
            cout en<<n/2 en;
            for(int i=(n/4)+1;i<n+1-i;i++){
                cout<<i<< " "<<(n+1-i)<<" ";
            }
        }
    }
        else cout <<"NO";

    return 0;
}