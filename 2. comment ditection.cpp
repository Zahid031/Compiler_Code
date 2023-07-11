#include <bits/stdc++.h>
using namespace std;
void isComment(string line)
{
    if (line[0] == '/' && line[1] == '/')
        cout << "Single line comment" << endl;
    else if (line.size() >= 4 && line[line.size() - 2] == '*' && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*')
        cout << "This is multi line comment" << endl;
    else
        cout << "this is not a comment" << endl;
}

int main()
{
    string inputLine;
    cout << "Enter an input line: ";
    getline(cin, inputLine);

    isComment(inputLine);

    return 0;
}

