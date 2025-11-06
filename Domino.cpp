#include <iostream>
using namespace std;
int main(){
    int r, c;
    int domino = 0;
    cin >> r >> c;
    for(int i = 1; i<=r; i++){
    	domino += c/2;
    }
    if(c%2 != 0){
    	domino += r/2;
    }
    cout << domino;
}
