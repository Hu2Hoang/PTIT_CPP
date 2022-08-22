#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool ascending(string s)
{
    for (int i = 1; i < 5; ++i)
    {
        if (s[i] <= s[i - 1])
            return 0;
    }
    return 1;
}

bool descending(string s)
{
    for (int i = 1; i < 5; ++i)
    {
        if (s[i] >= s[i - 1])
            return 0;
    }
    return 1;
}

bool beautiful(string s)
{
    return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

bool lucky(string s)
{
    for (int i = 0; i < 5; ++i)
    {
        if (s[i] != '6' && s[i] != '8')
            return 0;
    }
    return 1;
}

void TestCase()
{
    cin.ignore();
    string s;
    cin>>s;
    s.erase(0, 5);
    cout<<s;
    if (ascending(s) || descending(s) || beautiful(s) || lucky(s))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}