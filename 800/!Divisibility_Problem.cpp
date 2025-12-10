// Solution 1: Exceeds time limit

/*
#include <iostream>
using namespace std;
int main(){
  long int n, count, a, b;
  cin >> n;
  while(n--){
    count = 0;
    cin >> a >> b;
    while(a % b != 0){
      count++;
      ++a;
    }
    cout << count << endl;
  }
}
*/

// Solution 2: Youtube

#include <iostream>
using namespace std;
int main(){
  int n, a, b;
  cin >> n;
  while(n--){
    cin >> a >> b;
    if(a % b == 0){
      cout << 0 << endl;
    } else {
      cout << b - (a%b) << endl;
    }
  }
}
