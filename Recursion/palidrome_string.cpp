#include <iostream>
using namespace std;

bool pal(string &s, int i)
{
    if (i >= s.size() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
        return false;

    return pal(s, i + 1);
}

int main()
{
    // string s = "MADAM";
    string s;
    cin >> s;
    cout << pal(s, 0);

    return 0;
}
