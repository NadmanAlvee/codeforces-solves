#include <iostream>
using namespace std;
int main(){
  int n, count = 0;
  cin >> n;
  char arr[n];
  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }
  for(int i = 0, j = 1; i<n-1; i++, j++){
      if(arr[i]==arr[j]){
        count++;
      }  
  }
  cout << count;
}
