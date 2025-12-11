#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
  set<char> s;
  string a;
  getline(cin, a);
  for(char i: a){
    if(i != ',' && i != ' ' && i != '{' && i != '}'){
      s.insert(i);
    }
  }
  cout << s.size();
}
