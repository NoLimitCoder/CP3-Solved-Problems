#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main(){
  int tc = 1;
  while(1){
    string s; cin >> s;
    if(s == "*") break;
    s = (s=="Hajj")?  "Hajj-e-Akbar" : "Hajj-e-Asghar";
    printf("Case %d: %s\n", tc++, s.c_str());
  }
  return 0;
}
