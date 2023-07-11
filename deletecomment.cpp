#include <fstream>
#include <iostream>
#include <string>
using namespace std;
bool isComment(string line)
{
    if (line[0] == '/' && line[1] == '/')
        return true;
    else if (line.size() >= 4 && line[line.size() - 2] == '*' && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*')
       return true;
    else
        return false;
}

void removeComments(const string& inputFile, const string& outputFile, int& deletionCount) {
    ifstream input(inputFile);
    ofstream output(outputFile);

    if (!input || !output) {
        cerr << "Error opening files." << endl;
        return;
    }

    string line;
    while (getline(input, line)) {
        if (!isComment(line)) {
            output << line << endl;
        } else {
            deletionCount++;
        }
    }

    input.close();
    output.close();
}

int main() {
    string inputFilename = "hello.txt", outputFilename = "output.txt";

    int deletionCount = 0;
    removeComments(inputFilename, outputFilename, deletionCount);
    string s;
    ifstream out("output.txt");
    while(getline(out,s)){
        cout << s << endl;
    }
    out.close();

    cout << "Number of comment deletions: " << deletionCount << std::endl;

    return 0;
}
