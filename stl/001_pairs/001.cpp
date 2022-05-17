#include <bits/stdc++.h>


using namespace std;

int main()
{
    // pair<int,string> p;

    //  pair acessing 
    // p.first = 1;
    // p.second = 2;
    // cout << p.first << endl;

    //  pair insertion
    // p = {1,"one"};
    // cout << p.first << " " << p.second << endl;

    // array of pair

    int a[] = {1,2,3};
    string s[] = {"one","two","three"};

    pair<int,string> p[3];
    for(int i= 0; i < 3; i++){
        p[i] = {a[i],s[i]};
    }

    for(int i= 0; i < 3; i++){
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}