#include <iostream>
#include <stack>
using namespace std;

// *** Stacks, container adaptors ***
// LIFO --> Last in First out

int main(){
    stack<string> s;
    s.push("kang");
    s.push("chan");
    s.push("GOB");

    cout << "Top element: " << s.top() << endl; //the element that went in last
    s.pop(); //pops out the top element
    cout << "Top element: " << s.top() << endl;

    cout << "Size --> " << s.size() << endl;
    
    cout << "Empty or not: " << s.empty() << endl;
}