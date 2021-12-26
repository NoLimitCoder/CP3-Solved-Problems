#include <cstdio>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main(){
  while(1){
    int k; scanf("%d",&k);
    if(k==0) {break;}
    int n, m; scanf("%d %d",&n,&m);
    rep(tc,k){
      int x, y; scanf("%d %d",&x,&y);
      if(x == n || y == m) { printf("divisa\n"); }
      else { printf("%s%s\n",y>m?"N":"S",x>n?"E":"O"); }
    }
  }
  return 0;
}
