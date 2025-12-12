#include <iostream>
using namespace std;
int main(){
  int a, b;
  bool c = true, d = false;
  cin >> a >> b;
  for(int i = 1; i<=a; i++){
    for(int j = 1; j<=b; j++){
      if(i % 2 != 0){
        cout << "#";
      } else {
        if(j == 1 && (c = !c)){
          cout << "#";
        } else if(j == b && (d = !d)){
          cout << "#";
        } else {
          cout << ".";
        }
      }
    }
    cout << endl;
  }
}
