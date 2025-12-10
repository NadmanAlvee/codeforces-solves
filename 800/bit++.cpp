#include <iostream>
using namespace std;
int main(){
  int n, final_value = 0;
  string code;
  cin >> n;
  while (n--){
    cin >> code;
    if(code == "++X" || code == "X++"){
      ++final_value;
    }
    if(code == "--X" || code == "X--"){
      --final_value;
    }
  }
  cout << final_value;
}
