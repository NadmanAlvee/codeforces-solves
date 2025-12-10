#include <iostream>
using namespace std;
int main(){
	string n;
	cin >> n;
	for(int i = 0; i<n.length(); i++){
		if(i == 0){
			if(int(n[i])>96){
				cout << char(int(n[i])-32);
			
			} else{
				cout << n[i];
			}
		} else {
			cout << n[i];
		}
	}
}