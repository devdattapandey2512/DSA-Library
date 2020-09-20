#include <bits/stdc++.h>

using namespace std;

int rightmost_binary_search(int arr[], int l, int h, int x, int size)   //finding rightmost occurance of a 
{                                                                       //element in a sorted array
    if (l > h)                                                           //O(logN)
        return -1;

    int mid = l + (h - l) / 2;

    if (arr[mid] == x && (mid == size - 1 || arr[mid + 1] != x))
        return mid;

    else if (arr[mid] > x)
        return rightmost_binary_search(arr, l, mid - 1, x, size - 1);

    else if (arr[mid] <= x)
        return rightmost_binary_search(arr, mid + 1, h, x, size - 1);


}

int leftmost_binary_search(int arr[], int l, int h, int x)          //finding leftmost occurance of a
{                                                                   //element in a sorted array
    if (l > h)                                                      //O(logN)
        return -1;

    int mid = l + (h - l) / 2;

    if (arr[mid] == x && (mid == 0 || arr[mid - 1] != x))
        return mid;

    else if (arr[mid] >= x)
        return leftmost_binary_search(arr, l, mid - 1, x);

    else if (arr[mid] < x)
        return leftmost_binary_search(arr, mid + 1, h, x);


}

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;

    cout << leftmost_binary_search(arr, 0, n - 1, x);
    cout << rightmost_binary_search(arr, 0, n - 1, x, n);

    return 0;
}