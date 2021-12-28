#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int w; cin >> w;
    int dif = 0; bool flag = 1;
    for(int i=0; i<w; i++){
      int x, y; cin >> x >> y;
      if(i == 0) {dif = abs(x-y);}
      if(abs(x-y) != dif) {flag = 0;}
    }
    cout << (flag? "yes\n" : "no\n");
    if(t>0) cout << '\n';
  }
  return 0;
} 
