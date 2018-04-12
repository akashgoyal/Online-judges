//CPP solution
//Problem Statement : https://www.hackerrank.com/challenges/30-data-types/problem

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int i1; double d1; string s1;
    
    // Read and save an integer, double, and String to your variables.
    cin >> i1;
    cin >> d1;
    getline(cin, s1);
    getline(cin, s1);

    cout << i+i1 << endl;
    cout << fixed << setprecision(1) << d+d1 << endl;
    cout << s << s1;
	
	return 0;
}