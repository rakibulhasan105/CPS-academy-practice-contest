/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0);   ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int Shuhashini)
{
    ll n;
    cin >> n;
    int count = 0;
    int temp = n;
    while (temp >0)
    {
        if(temp%10!=0)
        {
            count++;
        }
        temp/=10;
    }
    cout << count << endl;
    temp = n;
    int base = 1;
    while (temp > 0)
    {
         int digit = temp % 10;

        if (digit != 0)
        {
            cout << digit * base << " ";
        }

        temp /= 10;
        base *= 10;
    }
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
        phobia(tc);
    }

    return 0; //                Hey, it's like a phobia..
}
