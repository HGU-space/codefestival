#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;

    cin >> str;
    int len = str.end() - str.begin() -1;
    str[len] = '5';
    cout << str << endl;
    return 0;
}