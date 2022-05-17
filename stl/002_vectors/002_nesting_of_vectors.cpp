#include<bits/stdc++.h>
using namespace std;

template <class T1,class T2>
void displayVectorOfPair(const vector < pair<T1,T2> > &v){
    printf("--------------vector of pair ----------- \n");
    cout << "size:" << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout<< " -------------------------------- " << endl;
 
}
template <class T>
void displayVectorOfVector(const vector <vector <T> > v)
{
 cout << "-------------" << "vector of vector" << "----------------" << endl;

 for(int i = 0 ; i < v.size() ; i++){
     
     cout << "size: " << v[i].size() << endl;

     for(auto element :   v[i]){
         cout << element << " ";
     }

     cout << endl;
 }    
}
void vectorOfPair(){

    vector<pair<int,string>> v;
    v.push_back({1,"one"});
    v.push_back({2,"two"});
    v.push_back({3,"three"});
    displayVectorOfPair(v);
    
}

void vectorOfVector(){
    vector < vector <int> > v;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++ ){
        
        vector < int > temp;
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            temp.push_back(x);

        }
        v.push_back(temp);
    }
    displayVectorOfVector(v);
}
int main()
{   
    vectorOfPair();
    vectorOfVector();
    return 0;
}