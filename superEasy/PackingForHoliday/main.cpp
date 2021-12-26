#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main(){
  int t, n; scanf("%d",&t); n = t;
  while(t--){
    int L, W, H; scanf("%d %d %d",&L,&W,&H);
    printf("Case %d: %s\n", n-t, (L<=20&&W<=20&&H<=20)? "good" : "bad");
  }
  return 0;
}
