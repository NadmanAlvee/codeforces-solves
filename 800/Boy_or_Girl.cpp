#include <iostream>
using namespace std;
int main(){
  string name;
  cin >> name;
  char distincts[100] = "0";
  int count = 0;

  for(int i = 0; i<size(name); i++){
    bool char_found = true;

    for(int j = 0; j<size(distincts); j++){
      if(name[i] == distincts[j]){
        char_found = false;
      }
    }
    if(char_found){
      distincts[i] = name[i];
      count++;
    }
  }
  if(count % 2 == 0){
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
}
