#include <bits/stdc++.h>
using namespace std;

void reverseArray(int *input, int n);
void printArray(int *input, int n);

int main(){
    int n;
    cin >> n;

    int *input = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    
    reverseArray(input, n);
    printArray(input, n);

    delete[] input;

    
}
void reverseArray(int *input, int n){
    int i=0, j=n-1;
    while(i<j){
        swap(input[i], input[j]);
        i++;
        j--;
    }
}
void printArray(int *input, int n){
    for (int i = 0; i < n; i++)
    {
        cout << input[i]<< " ";
    }   
}