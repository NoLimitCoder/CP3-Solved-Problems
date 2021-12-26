#include <cstdio>
#include <cmath>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
int main(){
  int t; scanf("%d",&t);
  while(t--){
    double x, y; scanf("%lf %lf",&x,&y);
    printf( "%d\n",  ( (int)ceil((x-2.0)/3.0) * (int)ceil((y-2.0)/3.0)) );
  }
  return 0;
}
