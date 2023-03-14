#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    while(d > 0){
        arr.push_back(arr.front());
        arr.erase(arr.begin());
        d--;
    }
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "";
    }
    return arr;
}

int main()
{
    rotateLeft(54,{1,2,3,4,5});
    return 0;
}
