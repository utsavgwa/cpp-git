#include <iostream>
using namespace std;

int binary_decimal(int n){
    int num=n, deci=0, place=1;
    while (num>0)
    {
        int last = num%10;
        deci=deci+(last*place);
        place=2*place;
        num=num/10;
    }
    return deci;

}

int main(){
    int n;
    cin >> n;
    cout << binary_decimal(n);
    return 0;
}