#include <bits/stdc++.h>
using namespace std;
bool isValidIdentifier(string s)
{
    if (!isalpha(s[0]) && s[0] != '_')
        return false;
    for (int i = 1; i < s.length(); i++)
    {
        if (!isalnum(s[i]) && s[i] != '_')
            return false;
    }
    return true;
}

int main()
{
    string identifier;
    cout << "Enter an identifier: ";
    cin >> identifier;

    if (isValidIdentifier(identifier))
        std::cout << "Valid identifier." << std::endl;
    else
        std::cout << "Invalid identifier." << std::endl;

    return 0;
}
