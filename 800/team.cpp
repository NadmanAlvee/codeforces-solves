#include <iostream>
using namespace std;
int main(){
  int n, vote[3], sol_count = 0;
  cin >> n;
  while (n--){
    int one_count = 0;
    for (int i = 0; i < 3; i++){
      cin >> vote[i];
      if (vote[i] == 1){
        one_count++;
      }
    }
    if (one_count > 1){
      sol_count++;
    }
  }
  cout << sol_count << endl;
}
