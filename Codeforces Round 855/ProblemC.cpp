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

// int dp[1000005];

using namespace std;

int max(int a, int b) { return (a > b) ? a : b;}

int maximum(vector<int> array) {
    int maxval = 0;
    fr(0, array.size(), i) {
        if (array[i] > maxval) {
            maxval = array[i];
        }
    }

    return maxval;
}

vector<int> removeElement(vector<int>& array, int element) {
    fr(0, array.size(), i) {
        if (array[i] == element) {
            array[i] = -1;
            break;
        }
    }

    return array;
}

void solve()
{

    int n, m, x, i, j, k;
    cin >> n;
    
    vector<int> a(n, 0);
    fr(0, n, i) {
        cin >> a[i];
    }

    /*
        Attempt 1:
        int answer = 0;
        vector<int> temp;

        i = 0;

        while (i < n) {

            while (a[i] == 0) {
                i++;
            }

            while (a[i] != 0) {
                i++;
            }

            j = 0;
            while (j < i) {
                if (a[j] > 0) {
                    temp.push_back(a[j]);
                }
                j++;
            }

            printArray(temp);
            cout << endl;

            answer += maximum(temp);
            removeElement(a, maximum(temp));

            temp.clear();
            i++;
        }
    */

    /*
        Attempt 2:
        priority_queue<int> powers;
        int answer = 0;
        
        fr(0, n, i) {
            if (a[i] != 0) {
                powers.push(a[i]);
            }
            else {
                if (!powers.empty()) {
                    answer += powers.top();
                    powers.pop();
                }
            }
        }

        cout << answer << endl;
    */    

}

signed main()
{
    fast_io;

    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;

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