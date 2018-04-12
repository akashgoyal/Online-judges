# cpp
# problem : https://www.hackerrank.com/challenges/30-regex-patterns/problem

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int N;
    cin >> N;
    //map<string, string> m;
    vector<string> v;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        
        string patt = "@gmail.com";
        int pos = emailID.find(patt);
        if(pos > 0) v.push_back(firstName);
        //if(pos > 0) m.insert(make_pair(emailID, firstName));
    }
    sort(v.begin(), v.end());
    for(auto &a : v) cout << a << endl;
    /*map<string, string>::iterator it = m.begin();
    for(it=m.begin(); it!=m.end(); ++it){
        cout << it->second << endl;
    }*/
        
    return 0;
}
