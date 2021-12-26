#include <cstdio>
#define deb(x) cerr<<#x<<": "<<x<<'\n'
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;


int main(){
  int st, n1, n2, n3;
  st = n1 = n2 = n3 = -1;
  while(1){
    scanf("%d%d%d%d",&st,&n1,&n2,&n3);
    if(st == 0 && n1 == 0 && n2 == 0 && n3 == 0)
      {break;}
    int ans = 360*3, dist = 0;
    dist = (st+40-n1)%40; ans += dist*9;
    dist = (n2+40-n1)%40; ans += dist*9;
    dist = (n2+40-n3)%40; ans += dist*9;
    printf("%d\n",ans);
  }
  return 0;
}
