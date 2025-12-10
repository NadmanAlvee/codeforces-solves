#include <iostream>
using namespace std;
int main(){
  int n, max = 0, min = 0, count = 0;
  cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin >> arr[i];
    if(arr[max] < arr[i]){
      max = i;
    }
    if(arr[min] >= arr[i]){
      min = i;
    }
  }
  if(max <= min){
    if(arr[0] != arr[max]){
      count+= max - 0;
    }
    if(arr[n-1] != arr[min]){
      count+= (n-1) - min;
    }
  } else {
    count--;
    count+= max - 0;
    count+= (n-1) - min;
  }
  cout << count;
}
