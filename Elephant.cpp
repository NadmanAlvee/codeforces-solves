#include <iostream>
using namespace std;
int main(){
  int cords,count=0;
  cin>>cords;
  count += (cords/5) + (cords%5 ? 1 : 0);
  cout<<count;
}
