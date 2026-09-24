
/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long
// at first i learn about this problem then i solve this ....

void phobia() {
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));

    for (int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;

        for (int j = 0; j < n; j++) {
        v[i][j] = s[j] - '0';
        }
    }

    int temp = v[0][0];


    for (int i = 0; i < n - 1; i++) {
        v[i][0] = v[i + 1][0];
    }

    for (int j = 0; j < n - 1; j++) {
        v[n - 1][j] = v[n - 1][j + 1];
    }

    for (int i = n - 1; i > 0; i--) {
        v[i][n - 1] = v[i - 1][n - 1];
    }

    for (int j = n - 1; j > 1; j--) {
        v[0][j] = v[0][j - 1];
    }

  
    v[0][1] = temp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j];
        }
        cout << '\n';
    }
}

int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}
