#include <iostream>
using namespace std;
int main() {
    string n;
    cin >> n;
    int count = 0;
    for(char i : n){
        if(i == '4' || i == '7') count++;
    }
    count == 4 || count == 7 ?  cout << "YES" :cout << "NO";
    
}