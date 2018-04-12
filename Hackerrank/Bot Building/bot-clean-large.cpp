#C++ solution
#Problem statement : https://www.hackerrank.com/challenges/botcleanlarge

#include<iostream>
#include<vector>
using namespace std;
void next_move(int posr, int posc, int dimh, int dimw, vector <string> board) {
    // if current cell is dirt. CLEAN it.
    string str = board[posr];
    const char *cstr = str.c_str();
    if(cstr[posc] =='d') { cout<<"CLEAN"; return; }
    
    // find closest dirt
    int dirtx=-1, dirty=-1, dist=10000;
    for(int i=0; i<dimh; i++) {
        string str = board[i];
        const char *cstr = str.c_str();
        for(int j=0; j<dimw; j++)
            if(cstr[j]=='d') {
                int tmpdist = abs(posr-i) + abs(posc-j);
                if(tmpdist < dist) {
                dist = tmpdist;
                dirtx = i;
                dirty = j;
                }
            }
    }
        
    // general logic to clean or move
    if( (posr-dirtx) > 0 ) cout<<"UP";
    else if( (posr-dirtx) < 0 ) cout<<"DOWN";
    else if( (posc-dirty) > 0 ) cout<<"LEFT";
    else if( (posc-dirty) < 0 ) cout<<"RIGHT";
    else cout<<"CLEAN";
    
    return;
}

int main(void) {
    int pos[2];
    int dim[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    cin>>dim[0]>>dim[1];
    for(int i=0;i<dim[0];i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], dim[0], dim[1], board);
    return 0;
}
