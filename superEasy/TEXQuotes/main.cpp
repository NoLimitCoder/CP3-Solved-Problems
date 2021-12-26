#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; bool f=1;
  while(getline(cin, s)){
    for(int i=0;i<s.size();++i)
      { s[i]=='"'? printf((f^=1)? "''" : "``") : printf("%c",s[i]); }
    printf("\n");
  }
  return 0;
}
