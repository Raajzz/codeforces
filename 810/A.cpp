#include <bits/stdc++.h>
#define ld long double
#define ull unsigned long long int
#define ll long long int
#define uint unsigned int
#define str string
#define umap(a,b) unordered_map<a,b>
#define p(a,b) pair<a,b>
#define v(a) vector<a>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  uint t;
  cin>>t;
  int temp;
  while(t--){
    int n;
    cin>>n;
    vector<int> vec;
    vec.reserve(n);
    for(int i=0; i<n; i++){
      vec.push_back(i+1);
    }
    for(int i=vec.size()-1; (i>=0) && (i-1 >= 0); i-=2){
      swap(vec[i], vec[i-1]);
    }
    for(int i=0; i<n; i++){
      cout << vec[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}