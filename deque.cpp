#include <iostream>
#include <deque>
using namespace std;

// *** Deque, sequence container *** 
// double ended queue
// can take data from both the ends

int main(){
    deque<int> d;
    d.push_back(1); //its in the name
    d.push_front(2);
    d.push_front(3);
    d.push_front(5);

    for(int i:d){
        cout << i << " ";
    }cout<< endl;

    
    // d.pop_back();
    // d.pop_front();

    cout << "Printing the first index element: " << d.at(1) << endl;

    cout << "front " << d.front()<< endl;
    cout << "back " << d.back()<< endl;

    cout << "is Empty: " << d.empty() << endl;

    d.begin(); // places an iterator in the beginning
    d.end(); // places an iterator in the end

    cout << "Size before erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 2); //takes 2 input, acting as a range from where to where we want to clear the deque
    cout << "size after erase: " << d.size() << endl;


    for(int i:d){
        cout <<  i << " ";
    }cout<< endl;

    d.clear();

    cout << "is Empty: " << d.empty() << endl;
}