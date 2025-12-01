#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n= 4, A[n];
  bool isUnique = false;
  vector<int> B;
  for(int i = 0; i<n; i++){
    cin >> A[i];
  }
  for(int i = 0; i<n; i++){
    isUnique = true;
    for(int j = 0; j<B.size(); j++){
      if(A[i] == B[j]){
        isUnique = false;
      }
    }
    if(isUnique){
      B.push_back(A[i]);
    }
  }
  cout << n - B.size();
}
