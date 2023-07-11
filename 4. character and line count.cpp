#include <bits/stdc++.h>
using namespace std;

int main()
{
    string data;
    ofstream myfile("test.txt");
    getline(cin, data);
    myfile << data; //"this is for test purpose";

    myfile.close();
    fstream read("test.txt");
    // string text;
    // while (getline(read, text))
    // {
    //     cout << text;
    // }
    char ch;
    int c = 0;
    while (read.get(ch))
    {
        if (!isspace(ch))
            c++;
    }
    read.close();
    cout << c << endl;
    int cn = 0;
    string line;
    fstream lineread("test.txt");
    while (getline(lineread, line))
    {
        cn++;
    }
    lineread.close();
    cout << cn << endl;

    return 0;
}