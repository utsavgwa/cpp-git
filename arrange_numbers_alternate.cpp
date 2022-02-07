#include <bits/stdc++.h>
using namespace std;

void arrange(int *input, int n);
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
    arrange(input, n);
    printArray(input, n);
    delete[] input;
    return 0;
}

void arrange(int *input, int n)
{
    int i=0, j=n-1, count=1;
    while(i<=j)
    {
        if(count %2==1)
        {
            input[i]=count;
            count++;
            i++;   
        }else 
        {
            input[j]=count;
            count++;
            j--;
        }
    }
}

void printArray(int *input, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i]<< " ";
    }   
}