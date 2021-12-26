#include <cstdio>
#include <cmath>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
int main(){
  int t; scanf("%d",&t);
  while(t--){
    long long x, y; scanf("%lld %lld",&x,&y);
    printf("%s\n", x==y?"=":x<y?"<":">");
  }
  return 0;
}
