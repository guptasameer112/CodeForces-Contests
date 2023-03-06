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

using namespace std;

int max(int a, int b) { return (a > b) ? a : b;}

string rev(string s) {
    string temp;
    for(int i = s.size(); i >= 0; i--) {
        temp += s[i];
    }
    return temp;
}

void solve()
{
    int n, m, x, i, j, k;
    cin >> n;

    vector<string> str;

    /*
        Attempt 0: N^2 solution (Doesn't work)
     
        fr(0 , 2* n - 2, i) {
            string s;
            cin >> s;
            str.push_back(s);
        }

        // printArray(str);

        int count = 0;
        fr(0, n, i) {
            fr(0, n, j) {
                if (str[i] == rev(str[j])) {
                    count++;
                    break;
                }
            }
        }

        if (count == n/2 or count == n/2 - 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    */

    
    /*
        Attempt 1:
        
        fr(0, 2*n - 2, i) {
            string s;
            cin >> s;
            str.push_back(s);
        }

        vector<string> p;
        fr(0, str.size(), i) {
            if (str[i].size() == n-1) {
                p.push_back(str[i]);
            }
        }

        string rev;
        for (int i = (p[0].size()-1); i >= 0; i--) {
            rev += p[0][i];
        }

        if (p[1] == rev) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    */

    /*
        Attempt 2:

        fr(0, 2*n - 2, i) {
            string s;
            cin >> s;
            if (s.size() == n - 1) {
                str.push_back(s);
            }
        }

        reverse(str[1].begin(), str[1].end());
        if (str[0] == str[1]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
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