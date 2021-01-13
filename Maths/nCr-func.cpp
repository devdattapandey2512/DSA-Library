//Made by: Devdatta Pandey
//A template for coding competion
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define ll long long int
#define mod 1000000007
#define inf 1000000000000000001
#define LIMIT 500001

using namespace std;

const int N = 300500;

ll fact[N];
ll invFact[N];

ll fast_pow(ll a, ll p) {
	ll res = 1;
	while (p) {
		if (p % 2 == 0) {
			a = (a * a) % mod;
			p /= 2;
		} else {
			res = (res * a) % mod;
			p--;
		}
	}
	return res;
}

ll C(int n, int k) {
	if (k > n) {
		return 0;
	}
	return fact[n] * invFact[k] % mod * invFact[n - k] % mod;
}

void solve()
{
	//code here
	//to calculate nCr call function c(n, r)
}

int main() {

	fact[0] = invFact[0] = 1;

	for (int i = 1; i < N; i++)
	{
		fact[i] = (fact[i - 1] * i) % mod;
		invFact[i] = fast_pow(fact[i], mod - 2);
	}

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}