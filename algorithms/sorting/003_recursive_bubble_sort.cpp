#include<bits/stdc++.h>
using namespace std;
void recursive_swap(vector <int> &arr,int j,int n,bool &swapped){
    if(j >= n - 1){
        return;
    }
    
    if(arr[j+1] < arr[j] ){
        swap(arr[j+1],arr[j]);
        swapped = true;
        
    }
  
    recursive_swap(arr,j+1,n--,swapped);
}
void recursive_bubble_sort(vector <int> &arr,int n){
    // bool swapped;
    // for(int i = 0; i < arr.size() - 1;  i++){
    //     swapped = false;
    //     for(int j = 0; j < arr.size() - i - 1; j++){
    //         if(arr[j+1] < arr[j]){
    //             swap(arr[j+1],arr[j]);
    //             swapped = true;
    //         }
    //     }
    //     if(swapped == false){
    //         break;
    //     }
    // }
    // bool swapped = false;
    // for(int j = 0; j < n -1; j++){
    //     if(arr[j+1] < arr[j]){
    //         swap(arr[j+1],arr[j]);
    //         swapped = true;
    //     }
    // }
    bool swapped = false;
    recursive_swap(arr,0,n,swapped);

    if(swapped == false){
        return;
    }

    recursive_bubble_sort(arr,n-1); 
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
     recursive_bubble_sort(arr,arr.size());
     display("sorted array",arr);

    return 0;
}