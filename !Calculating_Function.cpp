// Solution 1: Exceeds time limit

/*
#include <iostream>
using namespace std;
int main(){
  long long int n, count = 0;
  bool sign = false;
  cin >> n;
  long long int i = 1;
  while(i <= n){
    if(sign){
      count += i;
      sign = !sign;
    } else {
      count -= i;
      sign = !sign;
    }
    i++;
  }
  cout << count;
}
*/

// Solution 2: Youtube
#include <iostream>
using namespace std;
int main(){
  long long int n;
  cin >> n;
  if(n % 2 == 0){
    cout << n / 2;
    return 0;
  } else {
    cout << (n / 2) - n;
  }
}
