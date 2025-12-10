#include <iostream>
using namespace std;
int main() {
  int n, t;
  cin >> n >> t;
  char A[n];
  for(int i = 0; i<n; i++){
    cin >> A[i];
  }
  while(t--){
    int i = 0, temp;
    while(i<n-1){
      if(A[i]=='B' && A[i+1]=='G'){
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
        i+=2;
        continue;
      }
      i++;
    }
  }
  for(char c : A){
    cout << c;
  }
}
