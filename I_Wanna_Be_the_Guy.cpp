#include <iostream>
#include <set>
using namespace std;
int main(){
  int n, a, b;
  set<int> cooperatedLevels;

  cin >> n;

  cin >> a;
  int arr1[a];
  for(int i = 0; i<a; i++){
    cin >> arr1[i];
    cooperatedLevels.insert(arr1[i]);
  }
  cin >> b;
  int arr2[b];
  for(int i = 0; i<b; i++){
    cin >> arr2[i];
    cooperatedLevels.insert(arr2[i]);
  }
  for(int i = 1; i<=n; i++){
    if(cooperatedLevels.count(i)){
      continue;
    }
    cout << "Oh, my keyboard!";
    return 0;
  }
  cout << "I become the guy.";
  return 0;
}
