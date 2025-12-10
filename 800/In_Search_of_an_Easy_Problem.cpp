#include <iostream>
using namespace std;
int main(){
  int n, opinion;
  cin >> n;
  while(n--){
    cin >> opinion;
    if(opinion == 1) {
      cout << "HARD";
      return 0;
    }
  }
  cout << "EASY";
  return 0;
}
