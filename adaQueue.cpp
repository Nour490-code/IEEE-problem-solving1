#include <iostream>
#include <deque>
#include <stack>

using namespace std;

int main()
{
    // Input number of queries
    int n; cin >> n;
    deque<int> todo;

    while(n > 0){
        // Input type of query
        string q;cin >> q;

        // Pushes the input number to front
        if(q == "toFront"){
            cin >> n;
            todo.push_front(n);
        }
        // Pushes the input number to front
        else if(q == "push_back"){
            cin >> n;
            todo.push_back(n);
        }
        // Checks if the deque is empty...
        //  If not prints front element then removes it
        else if (q == "front"){
            if(todo.empty()){
                cout << "No job for Ada?" << endl;
            }else{
                cout << todo.front() <<endl;
                todo.pop_front();
            }
        }
        // Checks if the deque is empty...
        //  If not prints back element then removes it
        else if(q == "back"){
           if(todo.empty()){
                cout << "No job for Ada?" << endl;
            }else{
                cout << todo.back() << endl;
                todo.pop_back();
            }
        }
        // Reverses the deque by adding it to a temporary stack
        else if(q == "reverse"){
            stack <int> stc; 
            for (int i = 0; i < todo.size(); i++) {
                stc.push(todo[i]);
            }
        }
        n--;
    }
    
    
    return 0;
}