#include <iostream>
using namespace std;
int main(){
    int mat[5][5];
    int posX, posY, moves = 0;
    for(int i = 0; i<5; i++){
      for(int j = 0; j<5; j++){ 
        cin >> mat[i][j];
        if(mat[i][j] == 1){
          posX = i; 
          posY = j; 
        }
      }
    }
    moves += abs(2 - posX) + abs(2 - posY);
    cout << moves;
}
