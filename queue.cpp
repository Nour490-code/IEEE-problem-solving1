

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Variable for amount of required queries 
    int t; cin >> t;
    queue <int> q;
    
    while(t>0){
        // Input x 
        int x;cin >> x;

        // If the input is one then push to the queue
        if(x == 1){
            // Inputing the value
            cin >> x;
            q.push(x);
        }
        // If the input is two and isn't empty then remove the first element
        else if(x == 2 && !q.empty()){
            q.pop();
        }
        // Other than that print empty if empty or output the front element
        else{
            q.empty() ? cout << "Empty!" : cout << q.front();
        }
        t--;
    }
    return 0;
}
