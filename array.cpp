#include <iostream>
#include <array>
using namespace std;

// Standard Template Library (STL)
// *** Arrays using STL***, sequence container

int main(){
    int basic[3] = {1, 2, 3}; //basic array

    array<int, 4> a = {1, 2, 3, 4}; //STL array, this is also static so no difference

    int size = a.size(); // .size function
    for(int i = 0; i<size; i++){
        cout << a[i] << endl;
    }

    cout << "Element as 2nd Index: " << a.at(2) << endl; // .at function

    cout << "Array empty or not (returns a boolean value) " << a.empty() << endl; // .empty function

    cout << "first element " << a.front() << endl; //returns the first element in the stl array
    cout << "last element " << a.back() << endl; //returns the last element in the stl array
}