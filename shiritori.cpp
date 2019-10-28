#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int player (int n) {
    if (n % 2 == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        return 2;
    }
}

int main () {
    int n;
    set<string> set;
    cin >> n;

    string prev;
    cin >> prev;
    set.insert(prev);
    
    for (int i = 0; i < n -1; i++) {
        string current;
        cin >> current;
        
        if (set.find(current) != set.end()) {
            cout << "Player " << player(i) << " lost" << endl;
            return 0;
            
        } 
        
        set.insert(current);
        
        if (prev.back()!= current.front()) {
            cout << "Player " << player(i) << " lost" << endl;
            return 0;
            
        } 
        
        prev = current;
    }
    cout << "Fair Game";
    
}

