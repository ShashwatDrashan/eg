#include<bits/stdc++.h>
using namespace std;
int i,a,b,m,n,s,c=-1;
char x;
int main(){
cin>>s>>a>>b>>m>>n;
for(;i<s;i++){
cin>>x;
if(x=='E'&&a<m)a++;
if(x=='W'&&a>m)a--;
if(x=='N'&&b<n)b++;
if(x=='S'&&b>n)b--;
if(a==m&&b==n){c=i+1;break;}
}
cout<<c;
return 0;
}
