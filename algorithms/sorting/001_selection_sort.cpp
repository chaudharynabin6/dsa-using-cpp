#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/selection-sort/
void selection_sort(vector<int> &arr){
    int min_i;
    for(int i = 0; i < arr.size() - 1; i++){
        min_i = i;
        for(int j = i+1; j < arr.size(); j++){
            if(arr[j] < arr[min_i] ){
                min_i = j;
            }
        }
        swap(arr[i],arr[min_i]);
        
    }
}
void input(vector <int> &arr, int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
}

void display(string message,const vector <int> &arr){
    cout << "----------   " << message << "  ---------" << endl;
    for(auto item : arr){
        cout << item << " ";
    }
    cout << endl;
    cout << "---------------------" << endl;
}
int main()
{   
     vector<int> arr;
     int n;
     
     input(arr,n);
     display("input",arr);
     selection_sort(arr);
     display("sorted array",arr);

    return 0;
}