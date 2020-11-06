#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define mod 1000000007
#define inf 1000000000000000001

using namespace std;

const ll MAX_SIZE = 1'500'000;
vector<ll> primes;  

void SieveOfEratosthenes()  
{  
    
    bool IsPrime[MAX_SIZE];  
    memset(IsPrime, true, sizeof(IsPrime));  
    
    for (ll p = 2; p * p < MAX_SIZE; p++)  
    {   
        if (IsPrime[p] == true)  
        {  
               
            for (ll i = p * p; i <  MAX_SIZE; i += p)  
                IsPrime[i] = false;  
        }  
    }  
    
    for (ll p = 2; p < MAX_SIZE; p++)  
       if (IsPrime[p])  
            primes.push_back(p); 
             
}  

void solve()
{
    //code here
    //for printing nth prime number || cout << primes[n-1]; 
}

int main()
{
	std::ios::sync_with_stdio(false);
	SieveOfEratosthenes();
    ll tc = 1;
    cin >> tc;
    while(tc--)
    {
        solve();
    }

	return 0;
}