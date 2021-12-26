#include <cstdio>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main(){
  int tc = 1;
  while(1){
    int n; scanf("%d",&n);if(n==0) break;
    int ans = 0, diff = 0, A[n];
    rep(i,n)
      {scanf("%d",&A[i]); A[i]==0? diff++ : ans++;}
    printf("Case %d: %d\n",tc++, ans-diff);
  }
  return 0;
}
