#include <iostream>
#include <vector>
using namespace std;

// *** Vectors in STL, sequence container ***
// vectors are dynamic arrays, they can change their size according to the need of the program
// if the size of an vector exceeds, the vector creates another vector of double its size, copies all of its elements to the new vector and then dumps the old one. 

int main(){
    vector<int> v; // vector and various functions
    // some more ways to initialize vectors:
    vector<int> a(4, 1); //(predefined size, all elements are initialized by 1(otherwise they're initialised by 0))

    vector<int> l(a); // copies the vector a into l

    cout << "print a ";
    for(int j:a){
        cout << j << " ";
    }cout << endl;

    cout << "print l ";
    for(int j:a){
        cout << j << " ";
    }cout << endl;

    cout << "capacity --> " << v.capacity() << endl; //returns capacity of the vector, that is how many elements it can hold
    
    v.push_back(1);
    cout << "capacity --> " << v.capacity() << endl; //here 1
    
    v.push_back(2);
    cout << "capacity --> " << v.capacity() << endl; //here 2
    
    v.push_back(3);
    cout << "capacity --> " << v.capacity() << endl; //here 4 as it doubled itself from 2.
    
    cout << "size --> " << v.size() << endl; 
    
    cout << "Element at any index " << v.at(2) << endl;

    cout << "first " << v.front() << endl;
    cout << "last " << v.back() << endl;

    cout << "before pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    v.pop_back(); // pops out the last element 

    cout << "after pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;
    
    v.clear(); // size becomes zero but capacity remains same
    cout << "size --> " << v.size() << endl;
    cout << "capacity --> " << v.capacity() << endl;
}