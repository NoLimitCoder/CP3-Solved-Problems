#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int f; cin >> f;
    double sum = 0;
    while(f--){
      double area, animals, multiplier;
      cin >> area >> animals >> multiplier;
      sum += ((area / animals) * multiplier) * animals;
    }
    cout << sum << '\n';
  }
  return 0;
}
