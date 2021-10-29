#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fastio();
    unsigned long long int t;
    cin >> t;
    while (t-- != 0)
    {
        int n;
        cin >> n;
        int a[n][n];
        unsigned long long int count = 0;
        if (n == 3)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == 1 && j == 1)
                    {
                        cout << "Q";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                cout << "\n";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == n - 2 && j == 1)
                    {
                        cout << "Q";
                    }
                    else if (j == n - 1 - i)
                    {
                        if (i >= n - 3)
                        {
                            cout << ".";
                        }
                        else
                        {
                            cout << "Q";
                        }
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}