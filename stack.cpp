#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; 
  cin >> t;
  stack<int> stc;
  
  while(t > 0){
      int x;
      cin >> x;
      if(x == 1){
        cin >> x;
        stc.push(x);
      }
      else if(x == 2){
        if(!stc.empty())
        stc.pop();
      }
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