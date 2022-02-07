#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int *input, int n);
void printArray(int *input, int n);

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    swapAlternate(input, n);
    printArray(input, n);
    delete[] input;
    return 0;
}

void swapAlternate(int *input, int n)
{
    for(int i = 0; i < n-1; i+=2)
    {
        int a= input[i];
        input[i] = input[i+1];
        input[i+1]=a;
    }
    
}

void printArray(int *input, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i]<< " ";
    }   
}