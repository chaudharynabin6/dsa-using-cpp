#include <bits/stdc++.h>
using namespace std;

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

int linearSearch(const vector<int> &arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {

        if (key == arr[i])
        {
            return i;
        }
    }

    return -1;
}

int improvedLinearSearch(const vector<int> &arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {

        if (key == arr[left])
        {
            return left;
        }

        if (key == arr[right])
        {
            return right;
        }

        left++;
        right--;
    }

    return -1;
}

int main()
{
    vector<int> arr;
    int n;

    input(arr, n);
    display("input", arr);
    int position = linearSearch(arr, 0);
    int p = improvedLinearSearch(arr, 0);
    cout << position << " " << p << endl;

    return 0;
}