#include <bits/stdc++.h>
#define deb(x) cerr<<#x<<": "<<x<<'\n'
using namespace std;

const int INF = 2e9;
int main(){
  int n, b, h, w;
  while(scanf("%d %d %d %d", &n, &b, &h, &w) != EOF ){
    int ans = INF;
    for(int i=0; i<h; ++i){
      int p; cin >> p;
      int maxbeds = 0;
      for(int j=0; j<w; ++j){
        int a; cin >> a;
        maxbeds = max(maxbeds, a);
      }
      if(maxbeds < n || n*p > b) continue;
      ans = min(ans, n * p);
    }
    if(ans != INF) {cout << ans << '\n';}
    else {cout << "stay home" << '\n';}
  }
  return 0;
}
