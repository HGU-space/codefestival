//Accepted

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n, m;
    map<int, int> grading;
    
    cin >> n >> m;

    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        ++grading[a];
        //cout << grading[a] << endl;
    }

    map<int , int>::iterator ite;
    int max = 0;
    int max_factor = 0;
    for(ite = grading.begin(); ite != grading.end(); ++ite){
        if(max < ite->second){
            max = ite->second;
            max_factor = ite->first;
        }
    }
    if(max <= n / 2){
        cout << '?' << endl;
        return 0;
    }
    
    cout << max_factor << endl;
    return 0;
}