#include <iostream>
#include <vector>

using namespace std;

// init a function that rotates each element to the left
vector<int> rotateLeft(int d, vector<int> arr) {

    // Lopping as long as number of rotations left is more than 0
    while(d > 0){
        // Init. a sort of a pointer
        // Shifting the first element of the vector to the end 
        arr.push_back(arr.front());

        // Removing the iterator 
        arr.erase(arr.begin());

        // After the rotation ends we decrement the number of rotations left
        d--;
    }

    // Looping through the vector to print out each element
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

