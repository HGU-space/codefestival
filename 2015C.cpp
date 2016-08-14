#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<functional>

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

int main(){
    int n;
    long long t;
    long long ans = 0;
    cin >> n >> t;
    vector<P> hw(n);

    REP(i, n){
        cin >> hw[i].first >> hw[i].second;
    }

    //全て書き写してor自分で達成できるか確認
    long long b = 0;
    REP(i, n){
        ans += hw[i].first;
        b += hw[i].second;
    }
    if(t >= ans){
        cout << 0 << endl;
        return 0;
    }
    if(t < b){
        cout << -1 << endl;
        return 0;
    }
    

    sort(hw.begin(), hw.end(), greater<P>() );
    
    vector<int> diff_hw(n);
    REP(i, n){
        diff_hw[i] = hw[i].first - hw[i].second;
    }
    REP(i, n){
        vector<int>::iterator ite = max_element(diff_hw.begin(), diff_hw.end());
        ans -= diff_hw[ite - diff_hw.begin()];
        if(ans <= t){
            cout << i + 1 << endl;
            return 0;
        }
        int j = ite - diff_hw.begin();
        hw[j].first = hw[j].second;
        hw[j].second = -1;
    }
}