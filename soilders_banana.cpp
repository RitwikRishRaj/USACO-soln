#include <iostream>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w ;

    int t_cost = k * w * (w+1)/2;
    int borrow = t_cost - n;

    cout << (borrow>0 ? borrow : 0) << endl;
    return 0;

}   