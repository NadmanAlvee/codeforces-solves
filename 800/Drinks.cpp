#include <iostream>
using namespace std;
int main(){
  int n;
  double avg, t;
  cin >> n;
  for(int i = 0; i<n; i++){
    cin >> t;
    avg += t;
  }
  cout << avg / n;
}
