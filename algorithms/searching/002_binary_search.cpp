#include <bits/stdc++.h>
using namespace std;

//  only works for sorted array
void input(vector<int> &arr, int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
}

void display(string message, const vector<int> &arr)
{
    cout << "----------   " << message << "  ---------" << endl;
    for (auto item : arr)
    {
        cout << item << " ";
    }
    cout << endl;
    cout << "---------------------" << endl;
}

int binarySearch(const vector<int> &arr, int left, int right, const int key)
{
    if (right >= left)
    {
        int midIndex = left + (right - left) / 2;
        cout << midIndex << endl;
        if (key == arr[midIndex])
            return midIndex;

        else if (key > arr[midIndex])
        {

            return binarySearch(arr, midIndex + 1, right, key);
        }
        else
        {
            return binarySearch(arr, left, midIndex - 1, key);
        }
    }

    return -1;
}

int main()
{
    vector<int> arr;
    int n;

    input(arr, n);
    display("input", arr);

    sort(arr.begin(), arr.end());

    display("sorted array", arr);
    int position = binarySearch(arr, 0, arr.size() - 1, 10);
    // int p = improvedLinearSearch(arr, 1);
    cout << position << endl;

    return 0;
}