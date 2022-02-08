#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        bool isp=true;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                isp = false;
                break;
            }
        }
        if (isp)
        {
            cout << i << " ";
        }
    }
    return 0;
}