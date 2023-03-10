# include <iostream>
# include <bits/stdc++.h>
# include <string>
# include <vector>
# include <set>
# include <algorithm>
# define INF 1e9
# define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
# define fr(a, b, i) for(int i = a; i < b; i++)
# define printArray(array) for(auto edge: array) {cout << edge << " ";}
# define all(x) x.begin(),x.end() // sort(all(arr))
# define vi vector<int>
# define int long long
# define pb push_back
# define pii pair<int, int>
# define seev(v, n) for(int i = 0; i < n; i++) {cin >> x; v.push_back(x);}
# define sees(s, n) for(int i= 0; i < n; i++) {cin >> x; s.insert(x);}
const int mod =  1e9 + 7;
const int mxN = 305;


// int dp[1000005];

using namespace std;

int max(int a, int b) { return (a > b) ? a : b;}

void solve()
{
    /*
        Key Point: the gcd is always less than or equal to the gcd of the prefix numbers
    */
    
    int n, m, x, i, j, k;
    cin >> n;

    vector<int> v;
    fr(0, n, i) {
        cin >> k;
        v.push_back(k);
    }

    int flag = 0;

    fr(0, n, i) {
        fr(i, n, j) {
            if (__gcd(v[i] , v[j]) <= 2) {
                flag = 1;
            }
        }
    }
    
    if (flag == 0) {
        cout << "No" << endl;
    }
    else cout << "Yes" << endl;
    
}

signed main()
{
    fast_io;
    int t;

    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cin >> t;
    // t = 1;

    while (t--)
    {
        // code here
        solve();
    }

    #ifdef LOCAL
    clock_t tStart = clock();
    cerr << fixed<< setprecision(10) << "\nTime Taken: " << (double)(clock()- tStart)/CLOCKS_PER_SEC << endl;
    #endif

    return 0;
}