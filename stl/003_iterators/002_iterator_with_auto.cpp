#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,4,4,6};
    for(auto item : v){
        cout << item << endl;
    }
    for(auto &item : v){
        item++;
    }
    for(auto item : v){
        cout << item << endl;
    }
    return 0;
}