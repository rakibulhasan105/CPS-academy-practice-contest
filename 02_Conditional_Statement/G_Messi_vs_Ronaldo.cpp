/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long
 // first i learned about the pentagon and problem, then i solved the problem
void phobia(int Shuhashini)
{
    int a,b, n,m;
    cin >> a >> b >> n >> m;
    int messi = (a*2)+ b;
    int ronaldo = (n*2) + m; 
    if(messi > ronaldo)
        cout << "Messi" << endl;
    else if(ronaldo > messi)
        cout << "Ronaldo" << endl;
    else
        cout << "Equal" << endl;
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

  return 0; //                Hey, it's like a phobia..
}