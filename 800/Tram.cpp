#include <iostream>
using namespace std;
int main(){
  int n, i, j, passanger_count = 0, max = 0;
  cin >> n;
  while(n--){
    cin >> i >> j;
    passanger_count += (j-i);
    if(passanger_count > max) {
      max = passanger_count;
    }
  }
  cout << max;
}
