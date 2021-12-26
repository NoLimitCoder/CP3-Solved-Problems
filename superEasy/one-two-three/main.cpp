#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main(){
  int t; scanf("%d",&t);
  while(t--){
    string s; cin >> s;
    if(s.size()==5) {printf("3\n");continue;}
    int cnt = 0;
    s[0]=='o'? cnt++ : cnt;  s[1]=='n'? cnt++ : cnt;  s[2]=='e'? cnt++ : cnt;
    printf("%s\n", cnt>1? "1" : "2");
  }
  return 0;
}
