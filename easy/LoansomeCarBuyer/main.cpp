#include <bits/stdc++.h>
#define deb(x) cerr<<#x<<": "<<x<<'\n'
using namespace std;
typedef long double ld;
const ld eps = 1e-14;

int main(){
  int months, records,   month,        m;
  ld loan,    car_value, down_payment, monthly_payment, rate;
  while(1){
    cin >> months >> down_payment >> loan >> records;
    if(months < 0) break;
    vector<ld> v(months,-1);
    for(int i=0;i<records;++i)
      {cin >> month >> rate; v[month] = rate;}
    for(int i=1;i<months;++i)
      {if(v[i] == -1) v[i] = v[i-1];}
    car_value  = loan+down_payment; monthly_payment = loan/months; m = 0;
    car_value -= car_value*v[0];
    while(months--){
      if(loan + eps < car_value) break;
      loan      -= monthly_payment;
      car_value -= car_value*v[++m];
    }
    cout << m << ( (m==1)? " month\n" : " months\n");
  }
  return 0;
}
