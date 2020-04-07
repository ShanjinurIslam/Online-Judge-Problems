#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

vector<string> split(const std::string &str, char delim = ' ')
{
    vector<string> out;

    stringstream ss(str);
    string token;
    while (getline(ss, token, delim))
    {
        out.push_back(token);
    }

    return out;
}

void output(vector<string> ins)
{
    stack<string> current;
    stack<string> forward;
    string s = "http://www.lightoj.com/";
    current.push(s);
    for (int i = 0; i < ins.size(); i++)
    {
        vector<string> arr = split(ins[i]);

        if (arr[0] == "VISIT")
        {
            while (!forward.empty())
            {
                forward.pop();
            }
            cout << arr[1] << endl;
            current.push(arr[1]);
        }

        else if (arr[0] == "BACK")
        {
            if (current.size() > 1)
            {
                forward.push(current.top());
                current.pop();
                cout << current.top() << endl;
            }
            else
                cout << "Ignored" << endl;
        }
        else if (arr[0] == "FORWARD")
        {
            if (forward.size() >= 1)
            {
                current.push(forward.top());
                forward.pop();
                cout << current.top() << endl;
            }
            else
                cout << "Ignored" << endl;
        }

        else
            break;
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    int current = 0;
    while (t--)
    {
        vector<string> ins;

        while (true)
        {
            string s;
            getline(cin, s);
            ins.push_back(s);
            if (s == "QUIT")
            {
                break;
            }
        }
        cout << "Case " << ++current << ":" << endl;
        output(ins);
    }
    return 0;
}
