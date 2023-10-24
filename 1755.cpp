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
void print(vector <int> &a,char x,int i){
    if (i==26){
        if (x!='-')
         cout<<x;
        return ;
    }
    string m="";
    for (int j=0;j<a[i]/2;j++) m+=i+'A';
    if (a[i]/2 >0)
    cout<<m;
    print(a,x,i+1);
    if (a[i]/2 >0)
    cout<<m;
}
int main(){
    fastio;
    vector <int> a(26,0);
    string s;cin>>s;
    int size=s.size(),count=0;
    char x;
    for (int i=0;i<size;i++){
        x=s[i];
        a[x-'A']+=1;
    }
    x='-';
    for(int i=0;i<26;i++){
        if (a[i]%2!=0){
            x=i+'A';
            count++;
        }
    }
    if (count>1){
        cout<<"NO SOLUTION\n";
    }
    else{
        print(a,x,0);
    }
    return 0;
}