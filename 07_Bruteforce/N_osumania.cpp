/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++)
    {
        char a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a=='#') vec[i] = 1;
        else if(b=='#') vec[i] = 2;
        else if(c=='#') vec[i] = 3;
        else vec[i] = 4;
    }
    for(int i = n-1; i >= 0; i--)
        cout << vec[i] << " ";

        cout << endl;
    return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}