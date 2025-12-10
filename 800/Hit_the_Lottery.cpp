#include <iostream>
using namespace std;
int main() {
    int t, count = 0;
				int n = 5;
    cin >> t;
    int arr[5] = {100, 20, 10, 5, 1};
    while(t){
        for(int i = 0; i<n; i++){
            count += (t/arr[i]);
            t -= ((t/arr[i]) * arr[i]);
        }
    }
    cout << count;
}
