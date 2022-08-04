#include <iostream>
#define lli long long int

using namespace std;

int main(){
  lli t;
  cin>>t;
  while(t--){
    lli temp;
    cin>>temp;
    if(temp % 2 == 0){
      cout << temp/2 << " " << temp /2 << " " << 0 << "\n";
    } else {
      cout << -1 << "\n";
    }
  }

}