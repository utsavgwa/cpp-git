#include <bits/stdc++.h>
using namespace std;

int findUnique_xor(int *input, int n)
{
    int x=0;
    for(int i = 0; i < n; i++)
    {
        x = x^input[i];
    }
    return x;
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
    cout << findUnique_xor(input, n);

    delete[] input;
    return 0;
}