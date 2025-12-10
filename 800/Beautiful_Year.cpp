#include <iostream>
using namespace std;
int main(){
	int year, count;
	cin >> year;
	while(++year){
		count = 0;
		for(int i = 0; i<4; i++){
			for(int j = 0; j<4; j++){
				if(j==i){
					continue;
				}
				if(to_string(year)[i] == to_string(year)[j]){
					count++;
				}
			}
		}
		if(count > 1){
			continue;
		} else {
			break;
		}
	}
	cout << year;
}
