#C++ solution
#Problem statement : https://www.hackerrank.com/challenges/saveprincess2

#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
    int i=0, j=-1;
    int diffr=0, diffc=0;
    for(; i<n; i++)
    {
        j = grid[i].find("p");
        if(j != -1) break;
    }
    
    if(!(r==i && c==j))
    {
        diffr = abs(r-i);
        diffc = abs(c-j);
        
        if(diffc > 0)
        {
            if(c < j) cout << "RIGHT";
            else cout << "LEFT";
        }
        else if(diffr > 0)
        {
            if(r > i) cout << "UP";
            else cout << "DOWN";
        }
    }
    //your logic here
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
