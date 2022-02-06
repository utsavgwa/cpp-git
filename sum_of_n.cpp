#include <iostream>
using namespace std;

int main(){
    int n, k, sum=0;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> k;
        sum=sum+k;
    }
    cout << sum << endl;
    return 0;
}