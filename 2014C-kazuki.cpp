//Accepted

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> room(n), reser(m);
    for(int i = 0; i < n; i++){
        cin >> room[i];
    }
    for(int i = 0; i < m; i++){
        cin >> reser[i];
    }

    if(n < m){
        cout << "NO" << endl;
        return 0;
    }

    sort(room.begin(), room.end(), greater<int>());
    sort(reser.begin(), reser.end(), greater<int>());

    for(int i = 0; i < m; i++){
        if(room[i] < reser[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}