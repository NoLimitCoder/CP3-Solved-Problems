#include <bits/stdc++.h>
#define deb(x) cerr<<#x<<": "<<x<<'\n'
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;

//problem1
//printf usage
/*
solved in Java as statement stablishes:
static void solve1(){
  Scanner sc = new Scanner(System.in);
  double x = sc.nextDouble();
  System.out.printf("%7.3f",x);
}
*/


//problem2
//printf usage
void solve2(){
  int n; cin >> n;
  const double PI = acos(-1);
  printf("%.*f",n,PI);
}


//problem3
//calculate day of the week (I used sakamoto's algorithm)
void solve3(){
  int d, m, y; cin >> d >> m >> y;
  vector<string> days = {"Sunday","Monday","Tuesday","wednesday","Thursday","Friday","Saturday"};
//int s[] = {0,3,-1,3,2,3,2,3,3,2,3,2}
  int t[] = {0,3, 2,5,0,3,5,1,4,6,2,4};
  y -= m<3;
  int idx = ( y + d + t[m-1] + y/4 + y/400 - y/100 ) %7;
  printf("%s\n",days[idx].c_str());
}

//problem4
//sort items and delete repeated ones.
void solve4(){
  int x, n; cin >> n;
  set<int>st;
  for(int i=0;i<n;++i) {cin >> x; st.insert(x);}
  for(int it : st) {cout << it << ' ';} cout << '\n';
}


//problem5
//custom sort
struct birthdate {int DD, MM, YYYY;};
bool compare(birthdate a, birthdate b){  if(a.MM<b.MM){return true;}  else if(a.DD<b.DD){return true;}   else{return a.YYYY<b.YYYY;}  }
void solve5(){
  int n; cin >> n;
  vector<birthdate> v(n);
  for(int i=0;i<n;++i) {cin >> v[i].DD >> v[i].MM >> v[i].YYYY;}
  sort(v.begin(), v.end(), compare);
  for(auto bd : v){cout << bd.DD << ' ' << bd.MM << ' ' << bd.YYYY << '\n';}
}


//problem 6
//Binary Search
void solve6(){
  int n, v; cin >> n >> v;
  vector<int> A(n);
  for(int i=0; i<n; ++i) {cin >> A[i];}
  sort(A.begin(),A.end());
  int ans = A[lower_bound(A.begin(), A.end(), v) - A.begin()];
  printf(ans == v? "YES\n" : "NO\n");
}


//problem 7
//permutations
void solve7(){
  long long ans = 0;
  vector<char> letters = {'A','B','C','D','E','F','G','H','I','J'};
  do{
    ans++;
    for(auto it : letters) {cout << it << ' ';} cout << '\n';
  }while(next_permutation(letters.begin(),letters.end()));
  printf("%lld\n",ans);
}


//problem 8
//generate all subsets (bitmask)
void solve8(){
  int N; cin >> N;
  vector<int>v(N);
  rep(i,N)
    {  v[i] = i;  }
  rep(i,1<<N)
    {  printf("{ ");  rep(j,N) { if(i & (1<<j)) printf("%d ",v[j]); }  printf("}\n");  }
  printf("Total Subsets: %d\n",1<<N);
}


//problem 9
/*
Convert from one numeric base to another
solved in Java with BigInteger:
static void solve9(){
  Scanner sc = new Scanner(System.in);
  String num = sc.next(); int x = sc.nextInt(), y = sc.nextInt();
  BigInteger ans = new BigInteger(num, x);
  System.out.println(ans.toString(y));
}
*/


//problem10
//replace special string with "***"
//|48-57 numbers 0-9 | 65-90  UpperCase Alphabet letters | 97-122 lowerCase Alphabet letters|
bool g(char c, char t)
  {  if(t == 'l') { return (97 <= c && c <= 122);}  else { return  (48 <= c && c <= 57);} }
void f(string &s,int i)
  {  if (g(s[i],'l') && g(s[i+1],'n') && g(s[i+2],'n'))  { s[i] = s[i+1] = s[i+2] = '*';} }
void solve10(){
    string s; getline(cin,s);
    f(s,0); f(s,s.size()-3);
    rep(i,s.size()) { if(s[i] == ' ' && s[i+4] == ' ') {f(s,i+1);} }
    printf("%s\n",s.c_str());
}


//problem11
//solve mathematical expression given a string
/*
solved using java with ScriptEngine
static void solve11() throws Exception {
  ScriptEngineManager mgr = new ScriptEngineManager();
  ScriptEngine engine = mgr.getEngineByName("JavaScript");
  Scanner sc = new Scanner(System.in);
  while (sc.hasNextLine())
    {System.out.println(engine.eval(sc.nextLine()));}
}
*/


int main(){
  //solve1();
  //solve2();
  //solve3();
  //solve4();
  //solve5();
  //solve6();
  //solve7();
  //solve8();
  //solve9();
  //solve10();
  //solve11();
  return 0;
}
