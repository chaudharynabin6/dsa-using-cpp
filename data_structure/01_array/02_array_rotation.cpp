// juggling algorithm 

// https://www.geeksforgeeks.org/array-rotation/
// Time complexity : O(n) 
// Auxiliary Space : O(1)


#include <iostream>

using namespace std;

void input(){

}

void display(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int gcd(int x,int y){
    if(y==0) return x;
    else return gcd(y,x%y);
}

void leftRotate(int arr[],int d,int n){
    //  for handling d >= n
    d = d % n;

    int g_c_d = gcd(d,n);

    for(int i=0;i<d;i++){

        int temp = arr[i];
        // intial position of left index
        int j=i;
        // this will always excute for time n/g_c_d so constant time
        while(1){
            /* info: move i-th values of blocks */
            // calculating the value of right index 
            // which left index + g_c_d 
            int k = j + g_c_d;

            // when the right index greater than left index 
            // then normalize back to with in array range
            if(k >= n){
                k = k - n;
            }
            // when the right index is equal to the i , then it is stopping criteria
            if(k == i){
                break;
            }
            // tranfering element of right index to left index
            arr[j] = arr[k];

            // updating left index with the value of right index
            j = k;  

        }

        // placing temp element in last position of j
        arr[j] = temp;

        

    }
}
int  main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "input:" << endl;
    display(arr,len);
    // cout << gcd(6,12) << endl;
    leftRotate(arr,5,len);
    cout << "output:" << endl;
    display(arr,len);
    return 0;
}