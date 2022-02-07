#include <bits/stdc++.h>
using namespace std;

int findUnique(int *input, int n)
{
    for(int i = 0; i < n; i++)
    {
        int j=0;
        for ( ; j < n; j++)//j always gets increased when traversed through whole loop
        {
            if (i !=j && input[i]==input[j])//if different indexes and value are equal, then element is repeating
            {
                break;
            }
        }
        if (j==n)
        {
            return input[i];//at a index in loop where i is unique
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
    cout << findUnique(input, n);

    delete[] input;
    return 0;
}

