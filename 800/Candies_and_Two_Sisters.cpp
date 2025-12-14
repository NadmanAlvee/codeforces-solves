#include <iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    while(n--){
        cin >> a;
        if(a<2){
            cout << 0 <<endl;
            continue;
        }
        if(a%2 == 0){
            cout << (a/2)-1 <<endl;
        } else {
            cout << a/2 <<endl;
        }
    }
}
