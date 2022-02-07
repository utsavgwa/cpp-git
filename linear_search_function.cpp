#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *input, int n, int x)
{
    for (int i=0; i<n; i++)
    {
        if(input[i]== x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int val;
    cin >> val;
    cout << linearSearch(input, n, val);

    delete[] input;
    return 0;
}