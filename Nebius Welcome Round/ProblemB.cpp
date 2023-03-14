# include <iostream>
# include <bits/stdc++.h>
# include <string>
# include <vector>
# include <set>
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
    int n, m, x, i, k, d, w;
    cin >> n >> k >> d >> w;

    vector<int> v;
    seev(v, n);

    int answer = 0;
    fr(0, n, i) {
        int j = i;
        while (j < n && (v[j] - v[i]) <= w && (j - i) <= k) {
            // checking for max patient time and number of doses
            j++;
            ++answer;

            if (j - i > k) {
                // if there are more possible patients remaining than doses, then go to the last possible
                i += k - 1;
            }

            else {
                int rem = k - (j - i);
                while (j < n && rem > 0 && v[j] - (v[i] + w) <= d) {
                    rem--;
                    j++;
                    i = --j;
                }
            }
        }
    }

    cout << answer << endl;
    
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