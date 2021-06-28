/*
Input : 
23,4,56

Output:
23
4
56
*/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    int temp;
    char ch;
    vector <int> v;
    while(ss>>temp){
        v.push_back(temp);
        ss>>ch;
    }
    
    return v;    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
