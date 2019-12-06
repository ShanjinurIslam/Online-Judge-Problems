//got TLE

#include <iostream>
#include <vector>
 
using namespace std;
 
vector<string> poss;
 
int main()
{
    int n;
    cin >> n;
    for (int index = 0; index < n; index++)
    {
        int flag = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i - 1] && s[i] != '?')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        poss.clear();
        string empty = "";
        poss.push_back(empty);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
            {
                if (i > 0)
                {
                    vector<string> a;
                    vector<string> b;
                    vector<string> c;
 
                    for (int k = 0; k < poss.size(); k++)
                    {
                        if (poss[k][i - 1] == 'a')
                        {
                            a.push_back(poss[k] + 'b');
                            a.push_back(poss[k] + 'c');
                        }
                        if (poss[k][i - 1] == 'b')
                        {
                            b.push_back(poss[k] + 'a');
                            b.push_back(poss[k] + 'c');
                        }
                        if (poss[k][i - 1] == 'c')
                        {
                            c.push_back(poss[k] + 'a');
                            c.push_back(poss[k] + 'b');
                        }
                    }
 
                    poss.clear();
                    poss.insert(poss.end(), a.begin(), a.end());
                    poss.insert(poss.end(), b.begin(), b.end());
                    poss.insert(poss.end(), c.begin(), c.end());
                    a.clear();
                    b.clear();
                    c.clear();
                }
                else
                {
                    poss[0] = "a";
                    poss.push_back("b");
                    poss.push_back("c");
                }
            }
            else
            {
                vector<int> del ;
                for (int j = 0; j < poss.size(); j++)
                {
                    if(poss[j][i-1]==s[i]){
                        poss.erase(poss.begin()+j) ;
                        j = j-1;
                    }
                    else poss[j] = poss[j] + s[i];
                }
            }            
        }
 
        if(poss.size()>0){
            cout<<poss[0]<<endl ;
        }
        else{
            cout<<"-1"<<endl;
        }
        
    }
    return 0;
}