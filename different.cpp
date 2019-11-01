
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    string str;
    
    while(cin >> a >> b) {
        
        cout << abs(stol(a)-stol(b)) <<endl;
    }   
        

    return 0;
}
