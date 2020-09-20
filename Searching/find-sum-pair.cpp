#include<bits/stdc++.h> 

using namespace std;

void sum_pair(int arr[], int l, int h, int x)                       //finds a pair with given sum in sorted array
{                                                                   //O(log N)
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
    int n, x;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;

    sum_pair(arr, 0, n - 1, x);

    return 0;
}