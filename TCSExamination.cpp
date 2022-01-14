#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d[3], s[3];
        int s1 = 0, s2 = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> d[i];
            s1 += d[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
            s2 += s[i];
        }
        if (s1 > s2)
        {
            cout << "Dragon" << endl;
            continue;
        }
        else if (s2 > s1)
        {
            cout << "Sloth" << endl;
            continue;
        }
        else
        {
            if (d[0] > s[0])
            {
                cout << "Dragon" << endl;
                continue;
            }
            else if(s[0] > d[0])
            {
                cout << "Sloth" << endl;
                continue;
            }
            if (d[1] > s[1])
            {
                cout << "Dragon" << endl;
                continue;
            }
            else if(s[1] > d[1])
            {
                cout << "Sloth" << endl;
                continue;
            }
            cout << "Tie" << endl;
            continue;
        }
    }
    return 0;
}