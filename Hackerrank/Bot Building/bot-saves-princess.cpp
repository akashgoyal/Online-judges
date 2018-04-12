#C++ solution
#Problem statement : https://www.hackerrank.com/challenges/saveprincess

#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
    int sz = grid.size();
    int i=0, j=-1;
    while(i < sz){
        j = grid[i].find('p');
        if(j != -1) break;
        i++;
    }
    
    int difI = abs(n/2 - i);
    int difJ = abs(n/2 - j);
    int k=0;
    for(k=0; k<difI; k++){
        if(i<n/2) cout << "UP" << endl;
        else cout << "DOWN" << endl;
    }
    for(k=0; k<difJ; k++){
        if(j>n/2) cout << "RIGHT" << endl;
        else cout << "LEFT" << endl;
    }
    //your logic here
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
