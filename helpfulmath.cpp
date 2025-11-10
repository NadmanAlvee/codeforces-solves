#include <iostream>
#include <vector>
using namespace std;
int main(){
    string ques;
    cin >> ques;
    vector<char> arr;
    char temp;
    for(char i : ques){
   	if(i != '+'){
   		arr.push_back(i);
   	}
    }
    int min_index;
    for(int i = 0; i<arr.size() - 1; i++){
    	min_index = i;
    	for(int j = i+1; j<=arr.size()-1; j++){
    		if(arr[j]<arr[min_index]){
    			min_index = j;
    		}
    	}
    	if(i!=min_index){
    		temp = arr[i];
    		arr[i] = arr[min_index];
    		arr[min_index] = temp;
    	}
    }
    for(int i = 0; i<arr.size(); i++){
    	cout << arr[i];
    	if(i!=arr.size()-1){
    		cout << '+';
    	}
    }
}
