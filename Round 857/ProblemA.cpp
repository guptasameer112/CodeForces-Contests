# include <iostream>
# include <bits/stdc++.h>
# include <cstdlib>
# include <string>
# include <vector>
# include <set>
# include <cstdlib>
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

void printAnswer(vector<int> v) {
    int count = 0;
    fr(0, v.size(), i) {
        if (v[i] > 0) {
            count++;
        }
        else {
            count--;
        }
        cout << count << " ";
    }
}

void solve()
{
    int n, m, x, i, j, k;
    cin >> n;
    // n = 3;
    vector<int> v;
    seev(v, n);

    // Max
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    printAnswer(v);
    cout << endl;

    // Min
    vector<int> v_min;
    fr (0, n, i) {
        fr (i + 1, n, j) {
            if (v[i] == abs(v[j])) {
                v_min.push_back(v[i]);
                v_min.push_back(v[j]);
            }
        }
    }

    fr (0, n, i) {
        int flag = 0;
        fr (i + 1, n, j) {
            if (v[i] == abs(v[j])) {
                flag = 1;
                break;
            }
        }
        if (!flag && v[i] > 0) v_min.push_back(v[i]);
    }

    printAnswer(v_min);
    cout << endl;
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