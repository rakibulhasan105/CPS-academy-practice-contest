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
   int k;
   cin >> k;
   if(k%4==0) cout << "North" << endl;
   else if(k%4==1) cout << "East" << endl;
   else if(k%4==2) cout << "South" << endl;
   else cout << "West" << endl;
    
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