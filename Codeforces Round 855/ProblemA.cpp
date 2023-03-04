# include <iostream>
# include <string>
# include <bits/stdc++.h>
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

// int dp[1000005];

using namespace std;

int max(int a, int b) { return (a > b) ? a : b;}

void solve()
{
    int n, m, x, i, j, k;

    cin >> n;
    string s;
    cin >> s;

    fr (0, n, i) {
        s[i] = tolower(s[i]);
    }

    /*
        Attempt 1:
        i = 0;
        bool a = 0, b = 0, c = 0, d = 0;

        while (i < n && s[i] == 'm') {
            i++;
            a = 1;
        }
        while (i < n && s[i] == 'e') {
            i++;
            b = 1;
        }
        while (i < n && s[i] == 'o') {
            i++;
            c = 1;
        }
        while (i < n && s[i] == 'w') {
            i++;
            d = 1;
        }
        if (a && b && c && d && (i == n)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    */


    /*
        Attempt 2:
        s.erase(unique(s.begin(), s.end()), s.end());
        if (s == "meow") {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    */

    /*
        Attempt 3:
        int flag = 0;

        if (s[0] == 'm' && s[n-1] == 'w') {
            flag = 1;
        }

        if (flag == 1) {
            fr (1, n - 1, i) {
                if (s[i] == 'm') {
                    if (s[i + 1] != 'm' && s[i + 1] != 'e') {
                        flag = 0;
                        break;
                    }
                }
                else if (s[i] == 'e') {
                    if (s[i + 1] != 'e' && s[i + 1] != 'o') {
                        flag = 0;
                        break;
                    }
                }
                else if (s[i] == 'o') {
                    if (s[i + 1] != 'o' && s[i + 1] != 'w') {
                        flag = 0;
                        break;
                    }
                }
                else if (s[i] == 'w') {
                    if (s[i + 1] != 'w') {
                        flag = 0;
                        break;
                    }
                } 
            }
        }

        if (flag == 0) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    */
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