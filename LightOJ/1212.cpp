#include <iostream>
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

class DEQ
{
private:
    vector<int> arr;
    int size;
    int current;

public:
    DEQ(int size)
    {
        this->size = size;
        this->current = 0;
        arr.reserve(size);
    }

    void pushLeft(int val)
    {
        if (this->current < this->size)
        {
            vector<int> new_arr ;
            new_arr.push_back(val) ;
            for (int i = 0; i < current; i++)
            {
                new_arr.push_back(arr[i]);
            }
            arr = new_arr ;
            current++;
            cout << "Pushed in left: " << val << endl;
        }
        else
        {
            cout << "The queue is full" << endl;
        }
    }

    void pushRight(int val)
    {
        if (this->current < this->size)
        {
            arr[current++] = val;
            cout << "Pushed in right: " << val << endl;
        }
        else
        {
            cout << "The queue is full" << endl;
        }
    }

    void popLeft()
    {
        if (current > 0)
        {
            int val = arr[0];
            for (int i = 1; i < current; i++)
            {
                arr[i - 1] = arr[i];
            }
            current--;
            cout << "Popped from left: " << val << endl;
        }
        else
        {
            cout << "The queue is empty" << endl;
        }
    }

    void popRight()
    {
        if (current > 0)
        {
            int val = arr[current - 1];
            current--;
            cout << "Popped from right: " << val << endl;
        }
        else
        {
            cout << "The queue is empty" << endl;
        }
    }

    void print()
    {
        for (int i = 0; i < current; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~DEQ()
    {
    }
};

int main()
{
    int t;
    cin >> t;
    int current = 0;
    while (t--)
    {

        int m, n;
        cin >> n >> m;
        DEQ deq(n);
        cin.ignore();
        cout << "Case " << ++current << ":" << endl;
        for (int i = 0; i < m; i++)
        {

            string s;
            getline(cin, s);

            vector<string> ins = split(s);

            if (ins[0] == "pushLeft")
            {
                int val = stoi(ins[1]);
                deq.pushLeft(val);
            }

            if (ins[0] == "pushRight")
            {
                int val = stoi(ins[1]);
                deq.pushRight(val);
            }

            if (ins[0] == "popLeft")
            {
                deq.popLeft();
            }

            if (ins[0] == "popRight")
            {
                deq.popRight();
            }
        }
    }
    return 0;
}
