#include <iostream>
using namespace std;
int main() {
  string a, b;
  cin >> a >> b;
  if(a.length() == b.length()){
    for(int i = 0, j = b.length()-1; i<a.length(); i++, j--){
      if(a[i] != b[j]){
        cout << "NO";
        return 0;
      }
    }
    cout << "YES";
  } else {
    cout << "NO";
  }
}
