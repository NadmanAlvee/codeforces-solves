#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string word;
    cin >> word;
    int c1 = 0, c2 = 0;
    for(int i = 0; i<word.length(); i++){
        (int)word[i] < 97 ? c1++ : c2++;
    }
    if(c1 > c2){
        for(char w : word){
            cout << (char)toupper(w);
        }
    } else {
        for(char w : word){
        				cout << (char)tolower(w);
        }
    }
}
