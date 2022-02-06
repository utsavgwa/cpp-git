#include <iostream>
using namespace std;

void decimal_binary_bitwise(int n){
    for (int i=31; i>=0; i--){
        int var = n>>i;
        if (var & 1)
            cout << "1";
        else
            cout << "0";
    }
}

int main(){
    int n;
    cin >> n;

    decimal_binary_bitwise(n);
    return 0;
}