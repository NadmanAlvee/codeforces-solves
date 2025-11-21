#include <iostream>
using namespace std;
int main() {
  int n, h, a, min_width = 0;
  cin >> n >> h;
  while(n--){
    cin >> a;
    a <= h ? min_width++ : min_width+=2;
  }
  cout << min_width;
}
