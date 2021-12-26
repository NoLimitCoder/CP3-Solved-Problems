#include <cstdio>
#include <algorithm>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
const int INF = 2e9;
int main(){
  int t; scanf("%d",&t);
  while(t--){
    int n; scanf("%d",&n);
    int A[n], mx = -INF, mn = INF;
     rep(i,n)
      {scanf("%d",&A[i]); mx = max(mx,A[i]); mn = min(mn,A[i]);}
     printf("%d\n",(mx-mn)*2);
  }
  return 0;
}
