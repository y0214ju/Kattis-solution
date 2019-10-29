#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() 
{ 
  string str;
  int n;
  set<string> s;
 
  while(cin >> str){
      s.insert(str);
      n++;
    }
  
    if (s.size() == n) {
      cout << "yes";
    }
  
    else {
      cout << "no";
     }
return 0;
}
