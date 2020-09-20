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

int root_binary_search(int n, int l, int h)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    int mid = l + (h - l) / 2;

    if (mid * mid == n || (mid * mid < n && (mid + 1) * (mid + 1) > n))
        return mid;

    if (mid * mid < n)
        return root_binary_search(n, mid + 1, h);

    if (mid * mid > n)
        return root_binary_search(n, l, mid - 1);

}

void sum_pair(int arr[], int l, int h, int x)
{
    if (l == h)
        cout << "Pair do not exist";

    if (arr[l] + arr[h] == x)
        cout << "Pair is: (" << arr[l] << " , " << arr[h] << ")";

    else if (arr[l] + arr[h] > x)
        sum_pair(arr, l, h - 1, x);

    else if (arr[l] + arr[h] < x)
        sum_pair(arr, l + 1, h, x);
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
