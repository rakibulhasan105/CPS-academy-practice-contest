/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int Shukashini)
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
    transform(s2.begin(), s2.end(), s2.begin(), :: tolower);
    if(s1 < s2)
    {
        cout << -1 << endl;
    }
    else if(s1 > s2)
    {
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    return 0; //         Hey, it's like a phobia..
}
