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
    string s;
    getline(cin, s);
    set<char> unique_chars;
    for (char c : s)
    {
        if (isalpha(c))
        {
            c = tolower(c);
            unique_chars.insert(c);
        }
    }
    if(unique_chars.size() == 26)
    {
        cout << "pangram" << endl;
    }
    else
    {
        cout << "not pangram" << endl;
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
