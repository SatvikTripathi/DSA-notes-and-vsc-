#include <iostream>
#include <list>
using namespace std;

// *** Lists, sequence container ***
// lists are implemented by doubly linked lists, i.e. they have pointers on both the ends
// unlike arrays vectors and deque, in place(direct access) is not possible, we have to traverse to get to elements 

int main(){
    list<int> l;

    list<int> l1(l); // l empty so l1 also empty

    list<int> n(5, 200);

    l.push_back(1); // similarly pop_back
    l.push_front(2); // similarly pop_front
    
    for(int i:l){
        cout << i << " ";
    }cout << endl;

    l.erase(l.begin()); //the element l.begin() is pointing to is deleted
    cout << "after Erase: " << endl;

    for(int i:l){
        cout << i << " ";
    }cout << endl;

    cout << "size of list: " << l.size();

    

}