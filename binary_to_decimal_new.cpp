#include <bits/stdc++.h>
using namespace std;

int binary_decimal_new(int n){
    int rem, deci=0, i=0;
    while (n!=0)
    {
        rem = n%10;
        n=n/10;
        deci = deci + (rem*pow(2,i));    
        ++i;
    }
    return deci;

}

int main(){
    int n;
    cin >> n;
    cout << binary_decimal_new(n);
    return 0;
}