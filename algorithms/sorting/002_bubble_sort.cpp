#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector <int> &arr){
    bool swapped;
    for(int i = 0; i < arr.size() - 1;  i++){
        swapped = false;
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1],arr[j]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
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
     bubble_sort(arr);
     display("sorted array",arr);

    return 0;
}