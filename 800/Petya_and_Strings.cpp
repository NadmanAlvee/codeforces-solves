// Lexicographically means, comapring chars 1 by 1;
#include <iostream>
#include <cctype>
using namespace std;
int main(){
  string a;
  string b;
  cin >> a >> b;
  for(int i = 0; i<a.length(); i++){
    if(tolower(a[i]) < tolower(b[i])){
      cout << -1;
      return 0;
    } else if( tolower(a[i]) > tolower(b[i]) ){
      cout << 1;
      return 0;
    }
  }
  cout << 0;
}
