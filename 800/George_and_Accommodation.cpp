#include <iostream>
using namespace std;
int main() {
    int n, a, b, count = 0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a >= 0 && b >= 0 && b-a >= 2){
            count++;
        }
    }
    cout << count;
}