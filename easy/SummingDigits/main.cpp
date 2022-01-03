#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int n; cin >> n;
    if(n == 0) break;
    int sum = 10;
    while(sum > 9){
      sum = 0;
      while(n > 0){
        sum += n%10; n /= 10;
      }
      n = sum;
    }
    cout << sum << '\n';
  }
  return 0;
}
