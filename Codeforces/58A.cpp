#include <iostream>
#include <vector>

using namespace std;

vector<int> h;
vector<int> e;
vector<int> l;
vector<int> o;

int main()
{

    string s;
    cin >> s;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'h')
        {
            h.push_back(i);
        }

        else if (s[i] == 'e')
        {
            e.push_back(i);
        }
        else if (s[i] == 'l')
        {
            l.push_back(i);
        }
        else if (s[i] == 'o')
        {
            o.push_back(i);
        }
    }

    if (h.size() == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (e.size() == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int h_index = h[0];
            int e_index = -1;
            for (int i = 0; i < e.size(); i++)
            {
                if (e[i] > h_index)
                {
                    e_index = e[i];
                    break;
                }
            }
            if (e_index != -1)
            {
                if (l.size() == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    int l1_index = -1;
                    for (int i = 0; i < l.size(); i++)
                    {
                        if (l[i] > e_index)
                        {
                            l1_index = l[i];
                            break;
                        }
                    }
                    if (l1_index != -1)
                    {
                        int l2_index = -1;
                        for (int i = 0; i < l.size(); i++)
                        {
                            if (l[i] > l1_index)
                            {
                                l2_index = l[i];
                                break;
                            }
                        }
                        if (l2_index != -1)
                        {
                            int o_index = -1 ;
                            for (int i = 0; i < o.size(); i++)
                            {
                                if (o[i] > l2_index)
                                {
                                    o_index = o[i];
                                    break;
                                }
                            }
                            if(o_index!=-1){
                                cout<<"YES"<<endl ;
                            }
                            else{
                                cout<<"NO"<<endl ;
                            }
                        }
                        else
                        {
                            cout << "NO" << endl;
                        }
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}