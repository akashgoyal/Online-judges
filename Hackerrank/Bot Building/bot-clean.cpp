#C++ solution
#Problem statement : https://www.hackerrank.com/challenges/botclean

#include<iostream>
#include<vector>
using namespace std;
void next_move(int posr, int posc, vector <string> board) {
    
    // prepare int array - dirtPos to track the positions of dirt 
    int dirtPos[25]={0};
    for(int i=0; i<5; i++){
        string str = board[i];
        int j = 0;
        for(string::iterator it=str.begin(); it<str.end(); it++, j++){
            if(*it=='d') dirtPos[i*5 + j]=1;
        }
    }
    
    // if robot is at dirt cell. CLEAN it
    string curStr = board[posr];
    const char *cstr = curStr.c_str();
    if(cstr[posc]=='d'){ cout << "CLEAN"; dirtPos[posr*5 + posc]=0; return; }
    
    // find nearest dirt to (posr,posc)
    //min(mod(botx - dustx)) + mod(boty - dusty))
    int dustx=0, dusty=0;
    int dist = 100;
    for(int i=0; i<25; i++){
        if(dirtPos[i]==1){
            int tmpdustx = i/5;
            int tmpdusty = i%5;
            int curDist = abs(posr-tmpdustx) + abs(posc-tmpdusty);
            if(curDist < dist){
                dustx = tmpdustx;
                dusty = tmpdusty;
                dist = curDist;
            }
        }
    }
    
    // proceed to clean nearest dust
    if(posr-dustx > 0) cout << "UP";
    else if(posr-dustx < 0) cout << "DOWN";
    else if(posc-dusty > 0) cout << "LEFT";
    else if(posc-dusty < 0) cout << "RIGHT";
    else cout << "CLEAN";
    
    return;
}

int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
