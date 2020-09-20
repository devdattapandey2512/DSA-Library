#include<bits/stdc++.h>

using namespace std;

int peak_binary_search(int arr[], int l, int h, int n)           //finding peak number using binary search
{                                                                //O(logN)
    if (l > h)
        return -1;

    int mid = l + (h - l) / 2;

    if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1])
        return arr[mid];

    else if (arr[mid] < arr[mid - 1])
        return peak_binary_search(arr, l, mid - 1, n);

    else
        return peak_binary_search(arr, mid + 1, h, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << peak_binary_search(arr, 0, n - 1, n);

    return 0;
}