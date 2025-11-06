#include <iostream>
using namespace std;
int main(){
  int n, k;
  int kScore, advanced;
  cin >> n >> k;
  advanced = 0;
  int scores[n];
  for(int i = 0; i<n; i++){
    cin >> scores[i];
    
    if(i == k-1){
      kScore = scores[i];
    }
    if(i < k-1 && scores[i] > 0 || scores[i] == kScore && scores[i] > 0){
      advanced++;
    }

  }
  cout << advanced;
}
