#include <iostream>
using namespace std;
int main() {
    int n, c1 = 0, c2 = 0;
    string score;
    cin >> n >> score;
    for(char c : score){
        c == 'A' ? c1++ : c2++;
    }
    if(c1>c2){
        cout << "Anton";
    } else if (c1==c2){
        cout << "Friendship";
    } else{
        cout << "Danik";
    }
}