#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = 0; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

using namespace std;
/*
//string型でやろうとしたが、これだと最後に出来たstrの各桁の和を取ってしまっている
int main(){
    vector<string> str;
    int n;
    long long sum = 0;
    cin >> n;

    vector<char> a(n+ 1);
    REP(i, n){
        cin >> a[i];
    }

    REP(i, n){
        str = str + a[i] + str;
    }

    cout << str << endl;
    REP(i, str.end() - str.begin()){
        int num = str[i] - '0';
        sum += num;
    }

    cout << sum << endl;
    return 0;
}
*/
int main(){
    int n;
    long long ans = 0;
    cin >> n;
    vector<int> a(n);

    REP(i, n){
        cin >> a[i]; 
    }

    for(int i = n-1; i >= 0; i--){
        double bi = pow(2.0, (double)i);
        //cout << bi << endl;
        ans += (long long)((double)a[n-i-1] * bi);
        //cout << ans << endl;
    }

    cout << ans << endl;
}