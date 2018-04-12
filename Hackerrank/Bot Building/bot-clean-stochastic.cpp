#C++ solution
#Problem statement : https://www.hackerrank.com/challenges/botcleanr

#include<iostream>
#include<vector>
using namespace std;
void nextMove(int posr, int posc, vector <string> board) {
    // find position of dirt
    int i=0, pos=-1;
    for(i; i<5; i++) {
        string boardRow = board[i];
        pos = boardRow.find('d');
        if(pos != -1) break;
    }
    
    // distance of dirt(i,pos) from bot(posr, posc)
    int dist = abs(posr-i) + abs(posc-pos);
    
    // if current position is dirt
    if(dist==0) { cout << "CLEAN"; return; } // if current position is dirt
    
    if((posr-i) > 0) cout << "UP"; 
    else if((posr-i) < 0) cout << "DOWN"; 
    else if((posc-pos) > 0) cout << "LEFT"; 
    else if((posc-pos) < 0) cout << "RIGHT"; 
    else cout << "CLEAN";
    
    return;    
}
int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;
        cin >> s;
        board.push_back(s);
    }
    nextMove(pos[0], pos[1], board);
    return 0;
}
