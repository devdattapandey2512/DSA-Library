#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int find(int arr[], int x)
{
    int i = 1;
    if (arr[0] == x)                             // finding an element in infinitly sized sorted array
        return 0;                                   // O(log N)

    while (arr[i] < x)
        i = i * 2;

    if (arr[i] == x)
        return i;

    else
        return binarySearch(arr, i / 2, i, x);
}

int main()
{
    int n, x;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;

    cout << find(arr, x);
    return 0;
}
