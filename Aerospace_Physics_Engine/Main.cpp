//Authors: Connor Wolanski and Jorge Avalos
//Project: Aerospace Simulation


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{ "Hello", "C++", "World", "from", "VS Code", "and the C++ extension!" };
    vector<string> jorgesMsg{ "Hello", "Connor,", "Thanks", "for", "inviting", "me" };
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

        for (const string& word : jorgesMsg)
    {
        cout << word << " ";
    }
    cout << endl;
}