#include <iostream>
#include <set>
using namespace std;

int main(){
  int n;
  cin >> n;
  char arr[n];
  set<char> uniqueArr;
  for(int i = 0; i<n; i++){
    cin >> arr[i];
    uniqueArr.insert(int(arr[i]) < 97 ? char(int(arr[i]) + 32) : arr[i]);
  }
  if(uniqueArr.size() < 26){
    cout << "NO";
  } else {
    cout << "YES";
  }
}
