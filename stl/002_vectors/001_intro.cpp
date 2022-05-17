#include <bits/stdc++.h>

using namespace std;

void vectorBasics();
void copyOperation();
template <class T>
void displayVector(string message,vector <T> &v){
    cout << "----------   "<< message << "   -------------" << endl;
    
    // v.size() O(1)
    cout << "size: " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "---------------------" << endl;
}
int main()
{   

//    vectorBasics();
copyOperation();
   
   return 0;

}
// vector basics
void vectorBasics(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    displayVector<int>("vector basics ",v);
}


//  copying vectors
void copyOperation(){
    vector <int> v;
    v.push_back(1); // O(1)
    v.push_back(2);
    v.push_back(3);

    vector <int> v2 = v; // O(1)

    displayVector("v1",v); 
    v2.push_back(4);
    displayVector("v2",v2);
}