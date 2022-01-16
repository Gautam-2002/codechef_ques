#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, f = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        sort(a, a + n, greater<int>());
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            if (s >= x)
            {
                cout << i + 1 << endl;
                f = -1;
                break;
            }
        }
        if (s < x)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
