/*

Verdict: Time limit exceeded on test 2

*/

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
    while(t--){
        int element;
        cin>>element;
        int seconds = 0;
        while(element != 0){
            if(element%3 == 0){
                element-=3;
                seconds++;
            } else if (element%2 == 0){
                element-=2;
                seconds++;
            } else if(element>3){
                element-=3;
                seconds++;
            } else if(element>2){
                element-=2;
                seconds++;
            } else if (element<2){
                seconds++;
                element+=2;
            } else if (element < 3){
                seconds++;
                element += 3;
            }
        }
        cout << seconds << "\n";
    }
    return 0;
}