// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

bool palindrome(int h, int m)
{
    int h1 = h / 10;
    int h2 = h % 10;
    int m1 = m / 10;
    int m2 = m % 10;

    return (h1 == m2 && h2 == m1);
}

int main()
{
    string s;
    cin >> s;

    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[3] - '0') * 10 + (s[4] - '0');

    int ans = 0;

    while (true)
    {
        if (palindrome(h, m))
        {
            cout << ans << "\n";
            break;
        }

        ans++;
        m++;

        if (m == 60)
        {
            m = 0;
            h++;
        }

        if (h == 24)
            h = 0;
    }

    return 0;
}