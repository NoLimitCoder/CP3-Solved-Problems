#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main(){
  int t; scanf("%d",&t);
  rep(i,t){
    int x, y, z; scanf("%d %d %d",&x,&y,&z);
    printf( "Case %d: %d\n",i+1,
    ((x<y&&x>z)||(x>y&&x<z))? x : (((y<x&&y>z)||(y>x&&y<z))? y : z) );
  }
  return 0;
}
