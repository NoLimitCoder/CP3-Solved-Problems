#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define deb(x) cerr<<#x<<": "<<x<<'\n'
using namespace std;

int main(){
  int t; scanf("%d",&t);
  int cnt = 0;
  while(t--){
    string s; cin >> s;
    if(s == "donate")
      {int x; cin >> x; cnt+=x;}
    else
      {cout << cnt << '\n';}
  }
  return 0;
}
