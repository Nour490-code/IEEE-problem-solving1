#include <bits/stdc++.h>
using namespace std;

int main(){
  //  variable with amount of queries
  int t;
  cin >> t;
  stack<int> stc;
  
  while(t > 0){
    
    int x;
    cin >> x;

    // If input is  1 then push the number to the stack
    if(x == 1){
      cin >> x;
      stc.push(x);
    }
    // If input is 2 and the stack is not empty then remove the top element
    else if(x == 2){
      if(!stc.empty())
      stc.pop();
    }

    // Else just print the top element
    else{
        if(stc.empty()){ 
        cout << "Empty" << endl;
        }
        else{
        cout << stc.top();
        }
    }
    t--;
 }
  return 0;
}